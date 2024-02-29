// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for tugas_yolo_yolocpp/Seen
#ifdef _MSC_VER
#pragma warning(push)
#pragma warning(disable : 4100)
#pragma warning(disable : 4265)
#pragma warning(disable : 4456)
#pragma warning(disable : 4458)
#pragma warning(disable : 4946)
#pragma warning(disable : 4244)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wpedantic"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#pragma GCC diagnostic ignored "-Wredundant-decls"
#pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#pragma GCC diagnostic ignored "-Wdelete-non-virtual-dtor"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wshadow"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif //_MSC_VER
#include "rclcpp/rclcpp.hpp"
#include "tugas_yolo_yolocpp/msg/seen.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TUGAS_YOLO_YOLOCPP_EXPORT ros2_tugas_yolo_yolocpp_msg_Seen_common : public MATLABROS2MsgInterface<tugas_yolo_yolocpp::msg::Seen> {
  public:
    virtual ~ros2_tugas_yolo_yolocpp_msg_Seen_common(){}
    virtual void copy_from_struct(tugas_yolo_yolocpp::msg::Seen* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tugas_yolo_yolocpp::msg::Seen* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_tugas_yolo_yolocpp_msg_Seen_common::copy_from_struct(tugas_yolo_yolocpp::msg::Seen* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //gate
        const matlab::data::TypedArray<int32_t> gate_arr = arr["gate"];
        msg->gate = gate_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'gate' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'gate' is wrong type; expected a int32.");
    }
    try {
        //flare
        const matlab::data::TypedArray<int32_t> flare_arr = arr["flare"];
        msg->flare = flare_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'flare' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'flare' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_tugas_yolo_yolocpp_msg_Seen_common::get_arr(MDFactory_T& factory, const tugas_yolo_yolocpp::msg::Seen* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","gate","flare"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tugas_yolo_yolocpp/Seen");
    // gate
    auto currentElement_gate = (msg + ctr)->gate;
    outArray[ctr]["gate"] = factory.createScalar(currentElement_gate);
    // flare
    auto currentElement_flare = (msg + ctr)->flare;
    outArray[ctr]["flare"] = factory.createScalar(currentElement_flare);
    }
    return std::move(outArray);
  } 
class TUGAS_YOLO_YOLOCPP_EXPORT ros2_tugas_yolo_yolocpp_Seen_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_tugas_yolo_yolocpp_Seen_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_tugas_yolo_yolocpp_Seen_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tugas_yolo_yolocpp::msg::Seen,ros2_tugas_yolo_yolocpp_msg_Seen_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_tugas_yolo_yolocpp_Seen_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tugas_yolo_yolocpp::msg::Seen,ros2_tugas_yolo_yolocpp_msg_Seen_common>>();
  }
  std::shared_ptr<void> ros2_tugas_yolo_yolocpp_Seen_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<tugas_yolo_yolocpp::msg::Seen>();
    ros2_tugas_yolo_yolocpp_msg_Seen_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_tugas_yolo_yolocpp_Seen_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_tugas_yolo_yolocpp_msg_Seen_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (tugas_yolo_yolocpp::msg::Seen*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_yolo_yolocpp_msg_Seen_common, MATLABROS2MsgInterface<tugas_yolo_yolocpp::msg::Seen>)
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_yolo_yolocpp_Seen_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER