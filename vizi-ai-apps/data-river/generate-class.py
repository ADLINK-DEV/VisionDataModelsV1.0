import csv
import json
import os

THING_CLASS_CONFIG="thing_class_config.csv"
CONFIG_LIBRARY="thing-data-configs"

LINUX_INSTALL_PREFIX="/opt/adlink/dist/etc/vision-data-river"
WIN_INSTALL_PREFIX="C:/dist/adlink/etc/vision-data-river"

def write_thing_data_config(things, osname, osfile):
    thing_str = ""
    for thing in things:
        thing_str += thing
        thing_str += '\n'

    default_config=""
    if osname is "win":
        default_config = f"""const std::string ADLINK_RIVER_DIST_DIR =
    "C:/dist/adlink/etc/vision-data-river";
const std::string DEFAULT_RIVER_CONFIG =
    "file://" + ADLINK_RIVER_DIST_DIR + "/config/DataRiver.xml";"""
    else:
        default_config = f"""
const std::string ADLINK_RIVER_DIST_DIR =
    "/opt/adlink/dist/etc/vision-data-river";
const std::string DEFAULT_RIVER_CONFIG =
    "file://" + ADLINK_RIVER_DIST_DIR + "/config/DataRiver.xml";"""
    header = f"""
#ifndef COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_{osname}_H
#define COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_{osname}_H
#include <vision-protobuf-data-models/models.h>
#include <vision-river-factory/thing_data_handler.h>
#include <vision-river-factory/thing_config.h>

namespace com {{ namespace adlinktech {{ namespace datariver {{
{default_config}
"""
    footer = f"""
}} }} }}

#endif // COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_{osname}_H
"""
    output = header
    output += thing_str
    output += footer
    out_file_name = f"{CONFIG_LIBRARY}-{osfile}.h"
    with open(out_file_name, 'w', encoding='utf-8') as f:
        f.write(output)

def write_json(filename, data):
    with open(filename, 'w', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, indent=4)

class ThingConfig:
    def __init__(self, row):
        self.tag_group_name = row[0]
        self.input_class = row[1]
        self.input_class_context = row[2]
        self.output_class = row[3]
        self.output_classes = row[4]
        self.output_class_context = row[5]
        self.input_classes = row[6]
        self.thing_class_context = row[7]
        self.class_desc = row[8]
        self.config_desc = row[9]
        self.cpp_namespace = row[10]
        self.input_setting_name = row[11]

    def generate_thing(self):
        self.make_config()
        self.make_class()

    def property_config(self, class_name, thing_context, class_context, desc):
        return {
            "id": "THING_PROPERTIES_ID",
            "classId": f"{class_name}:{thing_context}:v1.0",
            "contextId": f"{class_context}",
            "description": f"{desc}"
        }

    def input_settings_config(self, input_setting_name):
        return {
            "inputSettings" : [
            {
                "name" : f"{input_setting_name}",
                "filters" : { "flowIdFilters": ["FLOW_ID_FILTER"] }
            } ]
        }

    def make_config(self):
        input = self.property_config(
            self.input_class,
            self.thing_class_context,
            self.input_class_context,
            self.config_desc)
        if self.input_setting_name:
            input.update(self.input_settings_config(self.input_setting_name))
        output = self.property_config(
            self.output_class,
            self.thing_class_context,
            self.output_class_context,
            self.config_desc)
        input_file = f"config/{self.input_class}Properties.json"
        output_file = "config/{}Properties.json".format(self.output_class)
        write_json(input_file, input)
        write_json(output_file, output)

    def class_config(self, class_name, context, desc, tag_kind, tag):
        return {
                "name": f"{class_name}",
                "context": f"{context}",
                "version": f"v1.0",
                "description": f"{desc}",
                f"{tag_kind}": [
                    {
                        "name":f"{tag}Data",
                        "tagGroupId":f"{tag}:{context}:v1.0"
                    }
                ]
            }

    def make_class(self):
        input = self.class_config(
            self.input_class,
            self.thing_class_context,
            self.class_desc,
            "inputs",
            self.tag_group_name)
        output = self.class_config(
            self.output_class,
            self.thing_class_context,
            self.class_desc,
            "outputs",
            self.tag_group_name)
        dir = f"definitions/ThingClass/{self.thing_class_context}"
        if not os.path.exists(dir):
            os.makedirs(dir)

        input_file = f"{dir}/{self.input_class}Class.json"
        output_file = f"{dir}/{self.output_class}Class.json"

        write_json(input_file, input)
        write_json(output_file, output)

    def get_thing_config_helper(self, prefix):
        input_name = f"{self.input_class}Config"
        output_name = f"{self.output_class}Config"
        config = f"""
typedef TThingDataHandler<{self.cpp_namespace}::{self.tag_group_name}> {self.tag_group_name}Thing;
// Define Config properties for {self.tag_group_name} message Readers
class {input_name} : public ThingConfig
{{
public:
    {input_name}()
    {{
        SetProperties("file://{prefix}/config/{self.input_class}Properties.json");
        AddTagGroup("file://{prefix}/definitions/TagGroup/{self.thing_class_context}/{self.tag_group_name}TagGroup.json");
        AddClassConfig("file://{prefix}/definitions/ThingClass/{self.thing_class_context}/{self.input_class}Class.json");
        FlowId("{self.tag_group_name}Reader");
        TypeName("{self.tag_group_name}");
        AddInputTag("{self.tag_group_name}Data");
    }}
}};

// Define Config properties for {self.tag_group_name} message Writers
class {output_name} : public ThingConfig
{{
public:
    {output_name}()
    {{
        SetProperties("file://{prefix}/config/{self.output_class}Properties.json");
        AddTagGroup("file://{prefix}/definitions/TagGroup/{self.thing_class_context}/{self.tag_group_name}TagGroup.json");
        AddClassConfig("file://{prefix}/definitions/ThingClass/{self.thing_class_context}/{self.output_class}Class.json");
        FlowId("ABCDEFG");
        TypeName("{self.tag_group_name}");
        DefaultOutputName("{self.tag_group_name}Data");
    }}
}};
"""
        return config

def main():
    linux_config_helpers = []
    win_config_helpers = []

    with open(THING_CLASS_CONFIG) as input_file:
        read_csv = csv.reader(input_file, delimiter=',')
        idx = 0
        for row in read_csv:
            idx += 1
            if idx-1 == 0:
                continue # SKip Headers
            thing = ThingConfig(row)
            thing.generate_thing()
            linux_config_helpers.append(thing.get_thing_config_helper(LINUX_INSTALL_PREFIX))
            win_config_helpers.append(thing.get_thing_config_helper(WIN_INSTALL_PREFIX))

    write_thing_data_config(linux_config_helpers, "LINUX", "linux")
    write_thing_data_config(win_config_helpers, "WIN", "win")

if __name__ == "__main__":
    main()
