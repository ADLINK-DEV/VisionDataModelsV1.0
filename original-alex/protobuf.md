# Using Protobuf

## Build System Notes

**Include**:
- /opt/oasys/protobuf/include

**Lib Path**
- /opt/oasys/protobuf/lib

**Lib Path**
- `-lprotobuf`

## Quick Hints

### Serialize From File

```c++
#include <fstream>

const std::string configFile = "somefile.xyz";
tensorrt::EngineConfig engineConfig;

std::ofstream output;
output.open(
    configFile.c_str(),
    std::ios::out | std::ios::binary);

if (engineConfig.SerializeToOstream(&output) == false)
{
    printf("Failed to save Engine Config file [%s]\n",
        configFile.c_str());
}
```

### Serialize To File

```c++
tensorrt::EngineConfig config;
/// Fill Config
#include <fstream>

const std::string configFile = "somefile.xyz";
tensorrt::EngineConfig engineConfig;

std::ofstream output;
output.open(
    configFile.c_str(),
    std::ios::out | std::ios::binary);

if (engineConfig.SerializeToOstream(&output) == false)
{
    printf("Failed to save Engine Config file [%s]\n",
        configFile.c_str());
}
if (output.is_open())
{
    output.close();
}
```

### From JSON File to Message

```c++
#include <google/protobuf/util/json_util.h>

const std::string configFile = "somefile.xyz";
tensorrt::EngineConfig engineConfig;

std::fstream input(configFile, std::ios::in);
std::string json(
    (std::istreambuf_iterator<char>(input)),
    std::istreambuf_iterator<char>());
google::protobuf::util::Status ret;
ret = google::protobuf::util::JsonStringToMessage(json, &engineConfig);
if (ret.ok() == false)
{
    printf("Failed to deserialize [%s]. Error [%d][%s]\n",
        configFile.c_str(),
        ret.error_code(),
        ret.error_message().data());
    printf("Failed to load Spira Config from [%s]\n",
        configFile.c_str());
}
input.close();

```

### From Message to JSON

```c++
#include <google/protobuf/util/json_util.h>

const std::string configFile = "somefile.xyz";
tensorrt::EngineConfig engineConfig;

std::string json;
google::protobuf::util::JsonPrintOptions options;
options.add_whitespace = true;
options.always_print_primitive_fields = true;
options.preserve_proto_field_names = true;
MessageToJsonString(engineConfig, &json, options);

printf("Writing Default config [%s]\n", json.c_str());

std::fstream output(configFile, std::ios::out);
output << json;
output.close();

```
