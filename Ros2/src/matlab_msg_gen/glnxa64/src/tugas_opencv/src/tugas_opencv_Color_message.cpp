// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for tugas_opencv/Color
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
#include "tugas_opencv/msg/color.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TUGAS_OPENCV_EXPORT ros2_tugas_opencv_msg_Color_common : public MATLABROS2MsgInterface<tugas_opencv::msg::Color> {
  public:
    virtual ~ros2_tugas_opencv_msg_Color_common(){}
    virtual void copy_from_struct(tugas_opencv::msg::Color* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tugas_opencv::msg::Color* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_tugas_opencv_msg_Color_common::copy_from_struct(tugas_opencv::msg::Color* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //red
        const matlab::data::TypedArray<int32_t> red_arr = arr["red"];
        msg->red = red_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'red' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'red' is wrong type; expected a int32.");
    }
    try {
        //blue
        const matlab::data::TypedArray<int32_t> blue_arr = arr["blue"];
        msg->blue = blue_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'blue' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'blue' is wrong type; expected a int32.");
    }
    try {
        //yellow
        const matlab::data::TypedArray<int32_t> yellow_arr = arr["yellow"];
        msg->yellow = yellow_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yellow' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yellow' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_tugas_opencv_msg_Color_common::get_arr(MDFactory_T& factory, const tugas_opencv::msg::Color* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","red","blue","yellow"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tugas_opencv/Color");
    // red
    auto currentElement_red = (msg + ctr)->red;
    outArray[ctr]["red"] = factory.createScalar(currentElement_red);
    // blue
    auto currentElement_blue = (msg + ctr)->blue;
    outArray[ctr]["blue"] = factory.createScalar(currentElement_blue);
    // yellow
    auto currentElement_yellow = (msg + ctr)->yellow;
    outArray[ctr]["yellow"] = factory.createScalar(currentElement_yellow);
    }
    return std::move(outArray);
  } 
class TUGAS_OPENCV_EXPORT ros2_tugas_opencv_Color_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_tugas_opencv_Color_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_tugas_opencv_Color_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tugas_opencv::msg::Color,ros2_tugas_opencv_msg_Color_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_tugas_opencv_Color_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tugas_opencv::msg::Color,ros2_tugas_opencv_msg_Color_common>>();
  }
  std::shared_ptr<void> ros2_tugas_opencv_Color_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<tugas_opencv::msg::Color>();
    ros2_tugas_opencv_msg_Color_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_tugas_opencv_Color_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_tugas_opencv_msg_Color_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (tugas_opencv::msg::Color*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_opencv_msg_Color_common, MATLABROS2MsgInterface<tugas_opencv::msg::Color>)
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_opencv_Color_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER