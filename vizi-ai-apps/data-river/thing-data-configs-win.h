
#ifndef COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_WIN_H
#define COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_WIN_H
#include <vision-protobuf-data-models/models.h>
#include <vision-river-factory/thing_data_handler.h>
#include <vision-river-factory/thing_config.h>

namespace com { namespace adlinktech { namespace datariver {

const std::string ADLINK_RIVER_DIST_DIR =
    "/opt/adlink/dist/etc/vision-data-river";
const std::string DEFAULT_RIVER_CONFIG =
    "file://" + ADLINK_RIVER_DIST_DIR + "/config/DataRiver.xml";

typedef TThingDataHandler<com::vision::models::CameraConnectRequest> CameraConnectRequestThing;
// Define Config properties for CameraConnectRequest message Readers
class CameraConnectRequestThingInConfig : public ThingConfig
{
public:
    CameraConnectRequestThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/CameraConnectRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/CameraConnectRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/CameraConnectRequestThingInClass.json");
        FlowId("CameraConnectRequestReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/CameraConnectRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/CameraConnectRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/CameraConnectRequestThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ClassificationThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/ClassificationTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/ClassificationThingInClass.json");
        FlowId("ClassificationReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ClassificationThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/ClassificationTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/ClassificationThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("Classification");
        DefaultOutputName("ClassificationData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::DetectionBox> DetectionBoxThing;
// Define Config properties for DetectionBox message Readers
class DetectionBoxThingInConfig : public ThingConfig
{
public:
    DetectionBoxThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DetectionBoxThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DetectionBoxTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DetectionBoxThingInClass.json");
        FlowId("DetectionBoxReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DetectionBoxThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DetectionBoxTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DetectionBoxThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DetectionPointThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DetectionPointTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DetectionPointThingInClass.json");
        FlowId("DetectionPointReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DetectionPointThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DetectionPointTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DetectionPointThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DeviceInfoThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DeviceInfoTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DeviceInfoThingInClass.json");
        FlowId("DeviceInfoReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DeviceInfoThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/DeviceInfoTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/DeviceInfoThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("DeviceInfo");
        DefaultOutputName("DeviceInfoData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::EngineConfig> EngineConfigThing;
// Define Config properties for EngineConfig message Readers
class EngineConfigThingInConfig : public ThingConfig
{
public:
    EngineConfigThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineConfigThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineConfigTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineConfigThingInClass.json");
        FlowId("EngineConfigReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineConfigThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineConfigTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineConfigThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineInfoThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineInfoTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineInfoThingInClass.json");
        FlowId("EngineInfoReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineInfoThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineInfoTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineInfoThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("EngineInfo");
        DefaultOutputName("EngineInfoData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::OutputTensor> OutputTensorThing;
// Define Config properties for OutputTensor message Readers
class OutputTensorThingInConfig : public ThingConfig
{
public:
    OutputTensorThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/OutputTensorThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/OutputTensorTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/OutputTensorThingInClass.json");
        FlowId("OutputTensorReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/OutputTensorThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/OutputTensorTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/OutputTensorThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PerformanceThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/PerformanceTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/PerformanceThingInClass.json");
        FlowId("PerformanceReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PerformanceThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/PerformanceTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/PerformanceThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/SegmentationThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/SegmentationTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/SegmentationThingInClass.json");
        FlowId("SegmentationReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/SegmentationThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/SegmentationTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/SegmentationThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/StreamRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/StreamRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/StreamRequestThingInClass.json");
        FlowId("StreamRequestReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/StreamRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/StreamRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/StreamRequestThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/VideoFrameThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/VideoFrameTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/VideoFrameThingInClass.json");
        FlowId("VideoFrameReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/VideoFrameThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/VideoFrameTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/VideoFrameThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("VideoFrame");
        DefaultOutputName("VideoFrameData");
    }
};


typedef TThingDataHandler<com::vision::models::ConfigRequest> ConfigRequestThing;
// Define Config properties for ConfigRequest message Readers
class ConfigRequestThingInConfig : public ThingConfig
{
public:
    ConfigRequestThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ConfigRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.config/ConfigRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.config/ConfigRequestThingInClass.json");
        FlowId("ConfigRequestReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ConfigRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.config/ConfigRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.config/ConfigRequestThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("ConfigRequest");
        DefaultOutputName("ConfigRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::ConfigActual> ConfigActualThing;
// Define Config properties for ConfigActual message Readers
class ConfigActualThingInConfig : public ThingConfig
{
public:
    ConfigActualThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ConfigActualThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.config/ConfigActualTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.config/ConfigActualThingInClass.json");
        FlowId("ConfigActualReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ConfigActualThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.config/ConfigActualTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.config/ConfigActualThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("ConfigActual");
        DefaultOutputName("ConfigActualData");
    }
};


typedef TThingDataHandler<com::vision::models::DeviceError> DeviceErrorThing;
// Define Config properties for DeviceError message Readers
class DeviceErrorThingInConfig : public ThingConfig
{
public:
    DeviceErrorThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DeviceErrorThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.error/DeviceErrorTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.error/DeviceErrorThingInClass.json");
        FlowId("DeviceErrorReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/DeviceErrorThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.error/DeviceErrorTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.error/DeviceErrorThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("DeviceError");
        DefaultOutputName("DeviceErrorData");
    }
};


typedef TThingDataHandler<com::vision::models::BinaryArtifact> BinaryArtifactThing;
// Define Config properties for BinaryArtifact message Readers
class BinaryArtifactThingInConfig : public ThingConfig
{
public:
    BinaryArtifactThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/BinaryArtifactThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/BinaryArtifactTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/BinaryArtifactThingInClass.json");
        FlowId("BinaryArtifactReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/BinaryArtifactThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/BinaryArtifactTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/BinaryArtifactThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("BinaryArtifact");
        DefaultOutputName("BinaryArtifactData");
    }
};


typedef TThingDataHandler<com::vision::models::smartpallet::CameraDataCodes> CameraDataCodesThing;
// Define Config properties for CameraDataCodes message Readers
class CameraDataCodesThingInConfig : public ThingConfig
{
public:
    CameraDataCodesThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/CameraDataCodesThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/CameraDataCodesTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/CameraDataCodesThingInClass.json");
        FlowId("CameraDataCodesReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/CameraDataCodesThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/CameraDataCodesTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/CameraDataCodesThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PalletManifestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PalletManifestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PalletManifestThingInClass.json");
        FlowId("PalletManifestReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PalletManifestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PalletManifestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PalletManifestThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PalletRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PalletRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PalletRequestThingInClass.json");
        FlowId("PalletRequestReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PalletRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PalletRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PalletRequestThingOutClass.json");
        FlowId("ABCDEFG");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PackageUpdateThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PackageUpdateTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PackageUpdateThingInClass.json");
        FlowId("PackageUpdateReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/PackageUpdateThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.smartpallet/PackageUpdateTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.smartpallet/PackageUpdateThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("PackageUpdate");
        DefaultOutputName("PackageUpdateData");
    }
};


typedef TThingDataHandler<com::vision::models::alarm::Alarm> AlarmThing;
// Define Config properties for Alarm message Readers
class AlarmThingInConfig : public ThingConfig
{
public:
    AlarmThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/AlarmThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.alarm/AlarmTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.alarm/AlarmThingInClass.json");
        FlowId("AlarmReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/AlarmThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.alarm/AlarmTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.alarm/AlarmThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("Alarm");
        DefaultOutputName("AlarmData");
    }
};


typedef TThingDataHandler<com::vision::models::alarm::Acknowledge> AcknowledgeThing;
// Define Config properties for Acknowledge message Readers
class AcknowledgeThingInConfig : public ThingConfig
{
public:
    AcknowledgeThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/AcknowledgeThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.alarm/AcknowledgeTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.alarm/AcknowledgeThingInClass.json");
        FlowId("AcknowledgeReader");
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
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/AcknowledgeThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.alarm/AcknowledgeTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.alarm/AcknowledgeThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("Acknowledge");
        DefaultOutputName("AcknowledgeData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::ModelConfigRequest> ModelConfigRequestThing;
// Define Config properties for ModelConfigRequest message Readers
class ModelConfigRequestThingInConfig : public ThingConfig
{
public:
    ModelConfigRequestThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ModelConfigRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/ModelConfigRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/ModelConfigRequestThingInClass.json");
        FlowId("ModelConfigRequestReader");
        TypeName("ModelConfigRequest");
        AddInputTag("ModelConfigRequestData");
    }
};

// Define Config properties for ModelConfigRequest message Writers
class ModelConfigRequestThingOutConfig : public ThingConfig
{
public:
    ModelConfigRequestThingOutConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ModelConfigRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/ModelConfigRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/ModelConfigRequestThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("ModelConfigRequest");
        DefaultOutputName("ModelConfigRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::ModelRequest> ModelRequestThing;
// Define Config properties for ModelRequest message Readers
class ModelRequestThingInConfig : public ThingConfig
{
public:
    ModelRequestThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ModelRequestThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/ModelRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/ModelRequestThingInClass.json");
        FlowId("ModelRequestReader");
        TypeName("ModelRequest");
        AddInputTag("ModelRequestData");
    }
};

// Define Config properties for ModelRequest message Writers
class ModelRequestThingOutConfig : public ThingConfig
{
public:
    ModelRequestThingOutConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/ModelRequestThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.request/ModelRequestTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.request/ModelRequestThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("ModelRequest");
        DefaultOutputName("ModelRequestData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::OpenVINOModelArtifact> OpenVINOModelArtifactThing;
// Define Config properties for OpenVINOModelArtifact message Readers
class OpenVINOModelArtifactThingInConfig : public ThingConfig
{
public:
    OpenVINOModelArtifactThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/OpenVINOModelArtifactThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/OpenVINOModelArtifactTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/OpenVINOModelArtifactThingInClass.json");
        FlowId("OpenVINOModelArtifactReader");
        TypeName("OpenVINOModelArtifact");
        AddInputTag("OpenVINOModelArtifactData");
    }
};

// Define Config properties for OpenVINOModelArtifact message Writers
class OpenVINOModelArtifactThingOutConfig : public ThingConfig
{
public:
    OpenVINOModelArtifactThingOutConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/OpenVINOModelArtifactThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/OpenVINOModelArtifactTagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/OpenVINOModelArtifactThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("OpenVINOModelArtifact");
        DefaultOutputName("OpenVINOModelArtifactData");
    }
};


typedef TThingDataHandler<com::vision::models::inference::EngineConfigV2> EngineConfigV2Thing;
// Define Config properties for EngineConfigV2 message Readers
class EngineConfigV2ThingInConfig : public ThingConfig
{
public:
    EngineConfigV2ThingInConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineConfigV2ThingInProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineConfigV2TagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineConfigV2ThingInClass.json");
        FlowId("EngineConfigV2Reader");
        TypeName("EngineConfigV2");
        AddInputTag("EngineConfigV2Data");
    }
};

// Define Config properties for EngineConfigV2 message Writers
class EngineConfigV2ThingOutConfig : public ThingConfig
{
public:
    EngineConfigV2ThingOutConfig()
    {
        SetProperties("file://C:/dist/adlink/etc/vision-data-river/config/EngineConfigV2ThingOutProperties.json");
        AddTagGroup("file://C:/dist/adlink/etc/vision-data-river/definitions/TagGroup/com.vision.data/EngineConfigV2TagGroup.json");
        AddClassConfig("file://C:/dist/adlink/etc/vision-data-river/definitions/ThingClass/com.vision.data/EngineConfigV2ThingOutClass.json");
        FlowId("ABCDEFG");
        TypeName("EngineConfigV2");
        DefaultOutputName("EngineConfigV2Data");
    }
};


} } }

#endif // COM_ADLINKTECH_DATARIVER_DATA_RIVER_THING_DATA_CONFIGS_WIN_H
