// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for tugas_opencv/Position
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
#include "tugas_opencv/msg/position.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TUGAS_OPENCV_EXPORT ros2_tugas_opencv_msg_Position_common : public MATLABROS2MsgInterface<tugas_opencv::msg::Position> {
  public:
    virtual ~ros2_tugas_opencv_msg_Position_common(){}
    virtual void copy_from_struct(tugas_opencv::msg::Position* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tugas_opencv::msg::Position* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_tugas_opencv_msg_Position_common::copy_from_struct(tugas_opencv::msg::Position* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //x_pos
        const matlab::data::TypedArray<int32_t> x_pos_arr = arr["x_pos"];
        msg->x_pos = x_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_pos' is wrong type; expected a int32.");
    }
    try {
        //y_pos
        const matlab::data::TypedArray<int32_t> y_pos_arr = arr["y_pos"];
        msg->y_pos = y_pos_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_pos' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_pos' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_tugas_opencv_msg_Position_common::get_arr(MDFactory_T& factory, const tugas_opencv::msg::Position* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","x_pos","y_pos"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tugas_opencv/Position");
    // x_pos
    auto currentElement_x_pos = (msg + ctr)->x_pos;
    outArray[ctr]["x_pos"] = factory.createScalar(currentElement_x_pos);
    // y_pos
    auto currentElement_y_pos = (msg + ctr)->y_pos;
    outArray[ctr]["y_pos"] = factory.createScalar(currentElement_y_pos);
    }
    return std::move(outArray);
  } 
class TUGAS_OPENCV_EXPORT ros2_tugas_opencv_Position_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_tugas_opencv_Position_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_tugas_opencv_Position_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tugas_opencv::msg::Position,ros2_tugas_opencv_msg_Position_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_tugas_opencv_Position_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tugas_opencv::msg::Position,ros2_tugas_opencv_msg_Position_common>>();
  }
  std::shared_ptr<void> ros2_tugas_opencv_Position_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<tugas_opencv::msg::Position>();
    ros2_tugas_opencv_msg_Position_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_tugas_opencv_Position_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_tugas_opencv_msg_Position_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (tugas_opencv::msg::Position*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_opencv_msg_Position_common, MATLABROS2MsgInterface<tugas_opencv::msg::Position>)
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_opencv_Position_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER