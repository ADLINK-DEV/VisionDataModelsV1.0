
#ifndef COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_LINUX_H
#define COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_LINUX_H

#include <vision-river-factory/thing_data_handler.h>
#include <vision-river-factory/thing_config.h>
#include <vision-protobuf-data-models/models.h>


namespace com { namespace adlinktech { namespace datariver {

const std::string ADLINK_RIVER_ETC_INSTALL_DIR =
    "/opt/adlink/dist/etc/vision-data-river";
const std::string ADLINK_DEFAULT_RIVER_CONFIG =
    "file://" + ADLINK_RIVER_ETC_INSTALL_DIR + "/config/DataRiver.xml";

typedef TThingDataHandler<com::vision::models::alarm::Acknowledge> AcknowledgeThing;
// Define Config properties for Acknowledge message Readers
class AcknowledgeThingInConfig : public ThingConfig
{
public:
    AcknowledgeThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/AcknowledgeThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/AcknowledgeTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/AcknowledgeThingInClass.json");
        TypeName("Acknowledge");
        AddInputTag("AcknowledgeData");
    }
};

// Define Config properties for Acknowledge message Writers
class AcknowledgeThingOutConfig : public ThingConfig
{
public:
    AcknowledgeThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/AcknowledgeThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/AcknowledgeTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/AcknowledgeThingOutClass.json");
        TypeName("Acknowledge");
        DefaultOutputName("AcknowledgeData");
    }
};


typedef TThingDataHandler<com::vision::models::alarm::Alarm> AlarmThing;
// Define Config properties for Alarm message Readers
class AlarmThingInConfig : public ThingConfig
{
public:
    AlarmThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/AlarmThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/AlarmTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/AlarmThingInClass.json");
        TypeName("Alarm");
        AddInputTag("AlarmData");
    }
};

// Define Config properties for Alarm message Writers
class AlarmThingOutConfig : public ThingConfig
{
public:
    AlarmThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/AlarmThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/AlarmTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/AlarmThingOutClass.json");
        TypeName("Alarm");
        DefaultOutputName("AlarmData");
    }
};


typedef TThingDataHandler<com::vision::models::BinaryArtifact> BinaryArtifactThing;
// Define Config properties for BinaryArtifact message Readers
class BinaryArtifactThingInConfig : public ThingConfig
{
public:
    BinaryArtifactThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/BinaryArtifactThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/BinaryArtifactTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/BinaryArtifactThingInClass.json");
        TypeName("BinaryArtifact");
        AddInputTag("BinaryArtifactData");
    }
};

// Define Config properties for BinaryArtifact message Writers
class BinaryArtifactThingOutConfig : public ThingConfig
{
public:
    BinaryArtifactThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/BinaryArtifactThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/BinaryArtifactTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/BinaryArtifactThingOutClass.json");
        TypeName("BinaryArtifact");
        DefaultOutputName("BinaryArtifactData");
    }
};


typedef TThingDataHandler<com::vision::models::CameraConnectRequest> CameraConnectRequestThing;
// Define Config properties for CameraConnectRequest message Readers
class CameraConnectRequestThingInConfig : public ThingConfig
{
public:
    CameraConnectRequestThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/CameraConnectRequestThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/CameraConnectRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/CameraConnectRequestThingInClass.json");
        TypeName("CameraConnectRequest");
        AddInputTag("CameraConnectRequestData");
    }
};

// Define Config properties for CameraConnectRequest message Writers
class CameraConnectRequestThingOutConfig : public ThingConfig
{
public:
    CameraConnectRequestThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/CameraConnectRequestThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/CameraConnectRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/CameraConnectRequestThingOutClass.json");
        TypeName("CameraConnectRequest");
        DefaultOutputName("CameraConnectRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::Classification> ClassificationThing;
// Define Config properties for Classification message Readers
class ClassificationThingInConfig : public ThingConfig
{
public:
    ClassificationThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ClassificationThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ClassificationTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ClassificationThingInClass.json");
        TypeName("Classification");
        AddInputTag("ClassificationData");
    }
};

// Define Config properties for Classification message Writers
class ClassificationThingOutConfig : public ThingConfig
{
public:
    ClassificationThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ClassificationThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ClassificationTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ClassificationThingOutClass.json");
        TypeName("Classification");
        DefaultOutputName("ClassificationData");
    }
};


typedef TThingDataHandler<com::vision::models::ConfigActual> ConfigActualThing;
// Define Config properties for ConfigActual message Readers
class ConfigActualThingInConfig : public ThingConfig
{
public:
    ConfigActualThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ConfigActualThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ConfigActualTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ConfigActualThingInClass.json");
        TypeName("ConfigActual");
        AddInputTag("ConfigActualData");
    }
};

// Define Config properties for ConfigActual message Writers
class ConfigActualThingOutConfig : public ThingConfig
{
public:
    ConfigActualThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ConfigActualThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ConfigActualTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ConfigActualThingOutClass.json");
        TypeName("ConfigActual");
        DefaultOutputName("ConfigActualData");
    }
};


typedef TThingDataHandler<com::vision::models::ConfigRequest> ConfigRequestThing;
// Define Config properties for ConfigRequest message Readers
class ConfigRequestThingInConfig : public ThingConfig
{
public:
    ConfigRequestThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ConfigRequestThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ConfigRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ConfigRequestThingInClass.json");
        TypeName("ConfigRequest");
        AddInputTag("ConfigRequestData");
    }
};

// Define Config properties for ConfigRequest message Writers
class ConfigRequestThingOutConfig : public ThingConfig
{
public:
    ConfigRequestThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ConfigRequestThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ConfigRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ConfigRequestThingOutClass.json");
        TypeName("ConfigRequest");
        DefaultOutputName("ConfigRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::DetectionBox> DetectionBoxThing;
// Define Config properties for DetectionBox message Readers
class DetectionBoxThingInConfig : public ThingConfig
{
public:
    DetectionBoxThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DetectionBoxThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DetectionBoxTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DetectionBoxThingInClass.json");
        TypeName("DetectionBox");
        AddInputTag("DetectionBoxData");
    }
};

// Define Config properties for DetectionBox message Writers
class DetectionBoxThingOutConfig : public ThingConfig
{
public:
    DetectionBoxThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DetectionBoxThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DetectionBoxTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DetectionBoxThingOutClass.json");
        TypeName("DetectionBox");
        DefaultOutputName("DetectionBoxData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::DetectionPoint> DetectionPointThing;
// Define Config properties for DetectionPoint message Readers
class DetectionPointThingInConfig : public ThingConfig
{
public:
    DetectionPointThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DetectionPointThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DetectionPointTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DetectionPointThingInClass.json");
        TypeName("DetectionPoint");
        AddInputTag("DetectionPointData");
    }
};

// Define Config properties for DetectionPoint message Writers
class DetectionPointThingOutConfig : public ThingConfig
{
public:
    DetectionPointThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DetectionPointThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DetectionPointTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DetectionPointThingOutClass.json");
        TypeName("DetectionPoint");
        DefaultOutputName("DetectionPointData");
    }
};


typedef TThingDataHandler<com::vision::models::DeviceInfo> DeviceInfoThing;
// Define Config properties for DeviceInfo message Readers
class DeviceInfoThingInConfig : public ThingConfig
{
public:
    DeviceInfoThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DeviceInfoThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DeviceInfoTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DeviceInfoThingInClass.json");
        TypeName("DeviceInfo");
        AddInputTag("DeviceInfoData");
    }
};

// Define Config properties for DeviceInfo message Writers
class DeviceInfoThingOutConfig : public ThingConfig
{
public:
    DeviceInfoThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DeviceInfoThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DeviceInfoTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DeviceInfoThingOutClass.json");
        TypeName("DeviceInfo");
        DefaultOutputName("DeviceInfoData");
    }
};


typedef TThingDataHandler<com::vision::models::DeviceError> DeviceErrorThing;
// Define Config properties for DeviceError message Readers
class DeviceErrorThingInConfig : public ThingConfig
{
public:
    DeviceErrorThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DeviceErrorThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DeviceErrorTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DeviceErrorThingInClass.json");
        TypeName("DeviceError");
        AddInputTag("DeviceErrorData");
    }
};

// Define Config properties for DeviceError message Writers
class DeviceErrorThingOutConfig : public ThingConfig
{
public:
    DeviceErrorThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/DeviceErrorThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/DeviceErrorTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/DeviceErrorThingOutClass.json");
        TypeName("DeviceError");
        DefaultOutputName("DeviceErrorData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::EngineConfig> EngineConfigThing;
// Define Config properties for EngineConfig message Readers
class EngineConfigThingInConfig : public ThingConfig
{
public:
    EngineConfigThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/EngineConfigThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/EngineConfigTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/EngineConfigThingInClass.json");
        TypeName("EngineConfig");
        AddInputTag("EngineConfigData");
    }
};

// Define Config properties for EngineConfig message Writers
class EngineConfigThingOutConfig : public ThingConfig
{
public:
    EngineConfigThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/EngineConfigThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/EngineConfigTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/EngineConfigThingOutClass.json");
        TypeName("EngineConfig");
        DefaultOutputName("EngineConfigData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::EngineInfo> EngineInfoThing;
// Define Config properties for EngineInfo message Readers
class EngineInfoThingInConfig : public ThingConfig
{
public:
    EngineInfoThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/EngineInfoThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/EngineInfoTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/EngineInfoThingInClass.json");
        TypeName("EngineInfo");
        AddInputTag("EngineInfoData");
    }
};

// Define Config properties for EngineInfo message Writers
class EngineInfoThingOutConfig : public ThingConfig
{
public:
    EngineInfoThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/EngineInfoThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/EngineInfoTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/EngineInfoThingOutClass.json");
        TypeName("EngineInfo");
        DefaultOutputName("EngineInfoData");
    }
};


typedef TThingDataHandler<com::vision::models::ModelReceiverStatus> ModelReceiverStatusThing;
// Define Config properties for ModelReceiverStatus message Readers
class ModelReceiverStatusThingInConfig : public ThingConfig
{
public:
    ModelReceiverStatusThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ModelReceiverStatusThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ModelReceiverStatusTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ModelReceiverStatusThingInClass.json");
        TypeName("ModelReceiverStatus");
        AddInputTag("ModelReceiverStatusData");
    }
};

// Define Config properties for ModelReceiverStatus message Writers
class ModelReceiverStatusThingOutConfig : public ThingConfig
{
public:
    ModelReceiverStatusThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/ModelReceiverStatusThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/ModelReceiverStatusTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/ModelReceiverStatusThingOutClass.json");
        TypeName("ModelReceiverStatus");
        DefaultOutputName("ModelReceiverStatusData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::OutputTensor> OutputTensorThing;
// Define Config properties for OutputTensor message Readers
class OutputTensorThingInConfig : public ThingConfig
{
public:
    OutputTensorThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/OutputTensorThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/OutputTensorTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/OutputTensorThingInClass.json");
        TypeName("OutputTensor");
        AddInputTag("OutputTensorData");
    }
};

// Define Config properties for OutputTensor message Writers
class OutputTensorThingOutConfig : public ThingConfig
{
public:
    OutputTensorThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/OutputTensorThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/OutputTensorTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/OutputTensorThingOutClass.json");
        TypeName("OutputTensor");
        DefaultOutputName("OutputTensorData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::Performance> PerformanceThing;
// Define Config properties for Performance message Readers
class PerformanceThingInConfig : public ThingConfig
{
public:
    PerformanceThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PerformanceThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/PerformanceTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/PerformanceThingInClass.json");
        TypeName("Performance");
        AddInputTag("PerformanceData");
    }
};

// Define Config properties for Performance message Writers
class PerformanceThingOutConfig : public ThingConfig
{
public:
    PerformanceThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PerformanceThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/PerformanceTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/PerformanceThingOutClass.json");
        TypeName("Performance");
        DefaultOutputName("PerformanceData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::Segmentation> SegmentationThing;
// Define Config properties for Segmentation message Readers
class SegmentationThingInConfig : public ThingConfig
{
public:
    SegmentationThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/SegmentationThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/SegmentationTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/SegmentationThingInClass.json");
        TypeName("Segmentation");
        AddInputTag("SegmentationData");
    }
};

// Define Config properties for Segmentation message Writers
class SegmentationThingOutConfig : public ThingConfig
{
public:
    SegmentationThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/SegmentationThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/SegmentationTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/SegmentationThingOutClass.json");
        TypeName("Segmentation");
        DefaultOutputName("SegmentationData");
    }
};


typedef TThingDataHandler<com::vision::models::StreamRequest> StreamRequestThing;
// Define Config properties for StreamRequest message Readers
class StreamRequestThingInConfig : public ThingConfig
{
public:
    StreamRequestThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/StreamRequestThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/StreamRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/StreamRequestThingInClass.json");
        TypeName("StreamRequest");
        AddInputTag("StreamRequestData");
    }
};

// Define Config properties for StreamRequest message Writers
class StreamRequestThingOutConfig : public ThingConfig
{
public:
    StreamRequestThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/StreamRequestThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/StreamRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/StreamRequestThingOutClass.json");
        TypeName("StreamRequest");
        DefaultOutputName("StreamRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::VideoFrame> VideoFrameThing;
// Define Config properties for VideoFrame message Readers
class VideoFrameThingInConfig : public ThingConfig
{
public:
    VideoFrameThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/VideoFrameThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/VideoFrameTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/VideoFrameThingInClass.json");
        TypeName("VideoFrame");
        AddInputTag("VideoFrameData");
    }
};

// Define Config properties for VideoFrame message Writers
class VideoFrameThingOutConfig : public ThingConfig
{
public:
    VideoFrameThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/VideoFrameThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.vision/1.0/VideoFrameTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.vision/1.0/VideoFrameThingOutClass.json");
        TypeName("VideoFrame");
        DefaultOutputName("VideoFrameData");
    }
};


typedef TThingDataHandler<com::vision::models::smartpallet::CameraDataCodes> CameraDataCodesThing;
// Define Config properties for CameraDataCodes message Readers
class CameraDataCodesThingInConfig : public ThingConfig
{
public:
    CameraDataCodesThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/CameraDataCodesThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/CameraDataCodesTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/CameraDataCodesThingInClass.json");
        TypeName("CameraDataCodes");
        AddInputTag("CameraDataCodesData");
    }
};

// Define Config properties for CameraDataCodes message Writers
class CameraDataCodesThingOutConfig : public ThingConfig
{
public:
    CameraDataCodesThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/CameraDataCodesThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/CameraDataCodesTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/CameraDataCodesThingOutClass.json");
        TypeName("CameraDataCodes");
        DefaultOutputName("CameraDataCodesData");
    }
};


typedef TThingDataHandler<com::vision::models::smartpallet::PalletManifest> PalletManifestThing;
// Define Config properties for PalletManifest message Readers
class PalletManifestThingInConfig : public ThingConfig
{
public:
    PalletManifestThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PalletManifestThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PalletManifestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PalletManifestThingInClass.json");
        TypeName("PalletManifest");
        AddInputTag("PalletManifestData");
    }
};

// Define Config properties for PalletManifest message Writers
class PalletManifestThingOutConfig : public ThingConfig
{
public:
    PalletManifestThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PalletManifestThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PalletManifestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PalletManifestThingOutClass.json");
        TypeName("PalletManifest");
        DefaultOutputName("PalletManifestData");
    }
};


typedef TThingDataHandler<com::vision::models::smartpallet::PalletRequest> PalletRequestThing;
// Define Config properties for PalletRequest message Readers
class PalletRequestThingInConfig : public ThingConfig
{
public:
    PalletRequestThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PalletRequestThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PalletRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PalletRequestThingInClass.json");
        TypeName("PalletRequest");
        AddInputTag("PalletRequestData");
    }
};

// Define Config properties for PalletRequest message Writers
class PalletRequestThingOutConfig : public ThingConfig
{
public:
    PalletRequestThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PalletRequestThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PalletRequestTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PalletRequestThingOutClass.json");
        TypeName("PalletRequest");
        DefaultOutputName("PalletRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::smartpallet::PackageUpdate> PackageUpdateThing;
// Define Config properties for PackageUpdate message Readers
class PackageUpdateThingInConfig : public ThingConfig
{
public:
    PackageUpdateThingInConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PackageUpdateThingInProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PackageUpdateTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PackageUpdateThingInClass.json");
        TypeName("PackageUpdate");
        AddInputTag("PackageUpdateData");
    }
};

// Define Config properties for PackageUpdate message Writers
class PackageUpdateThingOutConfig : public ThingConfig
{
public:
    PackageUpdateThingOutConfig()
    {
        SetProperties("file:///opt/adlink/dist/etc/vision-data-river/config/1.0/PackageUpdateThingOutProperties.json");
        AddTagGroup("file:///opt/adlink/dist/etc/vision-data-river/definitions/TagGroup/com.adlinktech.smartpallet/1.0/PackageUpdateTagGroup.json");
        AddClassConfig("file:///opt/adlink/dist/etc/vision-data-river/definitions/ThingClass/com.adlinktech.smartpallet/1.0/PackageUpdateThingOutClass.json");
        TypeName("PackageUpdate");
        DefaultOutputName("PackageUpdateData");
    }
};


} } }

#endif // COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_LINUX_H
