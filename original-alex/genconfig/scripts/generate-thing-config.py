import csv
import json
import os
import argparse

parser = argparse.ArgumentParser(description='Thing Config Generator.')
parser.add_argument('--config',
                   help='Path to generator script config file')
args = parser.parse_args()
print(f"Using Config from [{args.config}]")
with open(args.config) as json_data_file:
    cfg = json.load(json_data_file)
config_str = json.dumps(cfg, indent=4)
print(f"Loading JSON Config:\n{config_str}")

### Global Config
CONFIG_DEFINITION_INPUT_CSV=cfg["CONFIG_DEFINITION_INPUT_CSV"]
OUTPUT_HEADER_NAME=cfg["OUTPUT_HEADER_NAME"]
LINUX_INSTALL_PREFIX=cfg["LINUX_INSTALL_PREFIX"]
WIN_INSTALL_PREFIX=cfg["WIN_INSTALL_PREFIX"]
PREFIX=cfg["PREFIX"]
PROTOBUF_MODEL_HEADERS=cfg["PROTOBUF_MODEL_HEADERS"]
HEADER_GUARD=cfg["HEADER_GUARD"]
HEADER_NAMESPACE=cfg["HEADER_NAMESPACE"]

def write_thing_data_config(things, osname, osfile):
    thing_str = ""
    for thing in things:
        thing_str += thing
        thing_str += '\n'

    pb_model_headers=""
    for header in PROTOBUF_MODEL_HEADERS:
        pb_model_headers += f"#include <{header}>\n"

    default_config=""
    if osname is "win":
        default_config = f"""const std::string {PREFIX}_RIVER_ETC_INSTALL_DIR =
    \"{WIN_INSTALL_PREFIX}\";
const std::string {PREFIX}_DEFAULT_RIVER_CONFIG =
    "file://" + {PREFIX}_RIVER_ETC_INSTALL_DIR + "/config/DataRiver.xml";"""
    else:
        default_config = f"""
const std::string {PREFIX}_RIVER_ETC_INSTALL_DIR =
    \"{LINUX_INSTALL_PREFIX}\";
const std::string {PREFIX}_DEFAULT_RIVER_CONFIG =
    "file://" + {PREFIX}_RIVER_ETC_INSTALL_DIR + "/config/DataRiver.xml";"""
    header = f"""
#ifndef {HEADER_GUARD}_{osname}_H
#define {HEADER_GUARD}_{osname}_H

#include <vision-river-factory/thing_data_handler.h>
#include <vision-river-factory/thing_config.h>
{pb_model_headers}

namespace com {{ namespace adlinktech {{ namespace datariver {{
{default_config}
"""
    footer = f"""
}} }} }}

#endif // {HEADER_GUARD}_{osname}_H
"""
    output = header
    output += thing_str
    output += footer
    out_file_name = f"{OUTPUT_HEADER_NAME}-{osfile}.h"
    with open(out_file_name, 'w', encoding='utf-8') as f:
        f.write(output)
        print(f"Wrote config file - [{out_file_name}]")

def write_json(filename, data):
    with open(filename, 'w', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, indent=4)

class ThingConfig:
    def __init__(self, row):
        self.tag_group_name = row[0]
        self.input_class = row[1]
        self.output_class = row[2]
        self.output_classes = row[3]
        self.input_classes = row[4]
        self.thing_config_context = row[5]
        self.thing_class_context = row[6]
        self.version = row[7]
        self.class_desc = row[8]
        self.config_desc = row[9]
        self.cpp_namespace = row[10]

    def generate_thing(self):
        self.make_config()
        self.make_class()

    def property_config(self, class_name, thing_context, class_context, desc, version):
        return {
            "id": f"{class_name}-_AUTO_",
            "classId": f"{class_name}:{thing_context}:v{version}",
            "contextId": f"{class_context}.UNIQUE_IDENTIFIER",
            "description": f"{desc}"
        }

    def make_config(self):
        input = self.property_config(
            self.input_class,
            self.thing_class_context,
            self.thing_config_context,
            self.config_desc,
            self.version)
        output = self.property_config(
            self.output_class,
            self.thing_class_context,
            self.thing_config_context,
            self.config_desc,
            self.version)
        dir=f"config/{self.version}"
        if not os.path.exists(dir):
            os.makedirs(dir)
        input_file = f"{dir}/{self.input_class}Properties.json"
        output_file = f"{dir}/{self.output_class}Properties.json"
        write_json(input_file, input)
        write_json(output_file, output)

    def class_config(self, class_name, context, desc, tag_kind, tag, version):
        return {
                "name": f"{class_name}",
                "context": f"{context}",
                "version": f"v{version}",
                "description": f"{desc}",
                f"{tag_kind}": [
                    {
                        "name":f"{tag}Data",
                        "tagGroupId":f"{tag}:{context}:v{version}"
                    }
                ]
            }

    def make_class(self):
        input = self.class_config(
            self.input_class,
            self.thing_class_context,
            self.class_desc,
            "inputs",
            self.tag_group_name,
            self.version)
        output = self.class_config(
            self.output_class,
            self.thing_class_context,
            self.class_desc,
            "outputs",
            self.tag_group_name,
            self.version)
        dir = f"definitions/ThingClass/{self.thing_class_context}/{self.version}"
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
        SetProperties("file://{prefix}/config/{self.version}/{self.input_class}Properties.json");
        AddTagGroup("file://{prefix}/definitions/TagGroup/{self.thing_class_context}/{self.version}/{self.tag_group_name}TagGroup.json");
        AddClassConfig("file://{prefix}/definitions/ThingClass/{self.thing_class_context}/{self.version}/{self.input_class}Class.json");
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
        SetProperties("file://{prefix}/config/{self.version}/{self.output_class}Properties.json");
        AddTagGroup("file://{prefix}/definitions/TagGroup/{self.thing_class_context}/{self.version}/{self.tag_group_name}TagGroup.json");
        AddClassConfig("file://{prefix}/definitions/ThingClass/{self.thing_class_context}/{self.version}/{self.output_class}Class.json");
        TypeName("{self.tag_group_name}");
        DefaultOutputName("{self.tag_group_name}Data");
    }}
}};
"""
        return config

def write_main_header():
    data = f"""#ifdef __linux__
    #include <{HEADER_NAMESPACE}/{OUTPUT_HEADER_NAME}-linux.h>
#elif _WIN32
    #include <{HEADER_NAMESPACE}/{OUTPUT_HEADER_NAME}-win.h>
#endif

"""
    out_file_name = f"{OUTPUT_HEADER_NAME}.h"
    with open(out_file_name, 'w', encoding='utf-8') as f:
        f.write(data)
        print(f"Wrote config file - [{out_file_name}]")

def main():
    linux_config_helpers = []
    win_config_helpers = []

    with open(CONFIG_DEFINITION_INPUT_CSV) as input_file:
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
    write_main_header()

if __name__ == "__main__":
    main()
