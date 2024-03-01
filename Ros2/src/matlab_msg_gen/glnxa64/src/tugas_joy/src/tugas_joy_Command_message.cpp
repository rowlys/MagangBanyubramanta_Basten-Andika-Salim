// Copyright 2020-2022 The MathWorks, Inc.
// Common copy functions for tugas_joy/Command
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
#include "tugas_joy/msg/command.hpp"
#include "visibility_control.h"
#include "class_loader/multi_library_class_loader.hpp"
#include "ROS2PubSubTemplates.hpp"
class TUGAS_JOY_EXPORT ros2_tugas_joy_msg_Command_common : public MATLABROS2MsgInterface<tugas_joy::msg::Command> {
  public:
    virtual ~ros2_tugas_joy_msg_Command_common(){}
    virtual void copy_from_struct(tugas_joy::msg::Command* msg, const matlab::data::Struct& arr, MultiLibLoader loader); 
    //----------------------------------------------------------------------------
    virtual MDArray_T get_arr(MDFactory_T& factory, const tugas_joy::msg::Command* msg, MultiLibLoader loader, size_t size = 1);
};
  void ros2_tugas_joy_msg_Command_common::copy_from_struct(tugas_joy::msg::Command* msg, const matlab::data::Struct& arr,
               MultiLibLoader loader) {
    try {
        //x_cmd
        const matlab::data::TypedArray<int32_t> x_cmd_arr = arr["x_cmd"];
        msg->x_cmd = x_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_cmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_cmd' is wrong type; expected a int32.");
    }
    try {
        //y_cmd
        const matlab::data::TypedArray<int32_t> y_cmd_arr = arr["y_cmd"];
        msg->y_cmd = y_cmd_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'y_cmd' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'y_cmd' is wrong type; expected a int32.");
    }
    try {
        //yaw
        const matlab::data::TypedArray<int32_t> yaw_arr = arr["yaw"];
        msg->yaw = yaw_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'yaw' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'yaw' is wrong type; expected a int32.");
    }
    try {
        //depth
        const matlab::data::TypedArray<int32_t> depth_arr = arr["depth"];
        msg->depth = depth_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'depth' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'depth' is wrong type; expected a int32.");
    }
    try {
        //x_button
        const matlab::data::TypedArray<int32_t> x_button_arr = arr["x_button"];
        msg->x_button = x_button_arr[0];
    } catch (matlab::data::InvalidFieldNameException&) {
        throw std::invalid_argument("Field 'x_button' is missing.");
    } catch (matlab::Exception&) {
        throw std::invalid_argument("Field 'x_button' is wrong type; expected a int32.");
    }
  }
  //----------------------------------------------------------------------------
  MDArray_T ros2_tugas_joy_msg_Command_common::get_arr(MDFactory_T& factory, const tugas_joy::msg::Command* msg,
       MultiLibLoader loader, size_t size) {
    auto outArray = factory.createStructArray({size,1},{"MessageType","x_cmd","y_cmd","yaw","depth","x_button"});
    for(size_t ctr = 0; ctr < size; ctr++){
    outArray[ctr]["MessageType"] = factory.createCharArray("tugas_joy/Command");
    // x_cmd
    auto currentElement_x_cmd = (msg + ctr)->x_cmd;
    outArray[ctr]["x_cmd"] = factory.createScalar(currentElement_x_cmd);
    // y_cmd
    auto currentElement_y_cmd = (msg + ctr)->y_cmd;
    outArray[ctr]["y_cmd"] = factory.createScalar(currentElement_y_cmd);
    // yaw
    auto currentElement_yaw = (msg + ctr)->yaw;
    outArray[ctr]["yaw"] = factory.createScalar(currentElement_yaw);
    // depth
    auto currentElement_depth = (msg + ctr)->depth;
    outArray[ctr]["depth"] = factory.createScalar(currentElement_depth);
    // x_button
    auto currentElement_x_button = (msg + ctr)->x_button;
    outArray[ctr]["x_button"] = factory.createScalar(currentElement_x_button);
    }
    return std::move(outArray);
  } 
class TUGAS_JOY_EXPORT ros2_tugas_joy_Command_message : public ROS2MsgElementInterfaceFactory {
  public:
    virtual ~ros2_tugas_joy_Command_message(){}
    virtual std::shared_ptr<MATLABPublisherInterface> generatePublisherInterface(ElementType /*type*/);
    virtual std::shared_ptr<MATLABSubscriberInterface> generateSubscriberInterface(ElementType /*type*/);
    virtual std::shared_ptr<void> generateCppMessage(ElementType /*type*/, const matlab::data::StructArray& /* arr */, MultiLibLoader /* loader */, std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
    virtual matlab::data::StructArray generateMLMessage(ElementType  /*type*/ ,void*  /* msg */, MultiLibLoader /* loader */ , std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* /*commonObjMap*/);
};  
  std::shared_ptr<MATLABPublisherInterface> 
          ros2_tugas_joy_Command_message::generatePublisherInterface(ElementType /*type*/){
    return std::make_shared<ROS2PublisherImpl<tugas_joy::msg::Command,ros2_tugas_joy_msg_Command_common>>();
  }
  std::shared_ptr<MATLABSubscriberInterface> 
         ros2_tugas_joy_Command_message::generateSubscriberInterface(ElementType /*type*/){
    return std::make_shared<ROS2SubscriberImpl<tugas_joy::msg::Command,ros2_tugas_joy_msg_Command_common>>();
  }
  std::shared_ptr<void> ros2_tugas_joy_Command_message::generateCppMessage(ElementType /*type*/, 
                                           const matlab::data::StructArray& arr,
                                           MultiLibLoader loader,
                                           std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>* commonObjMap){
    auto msg = std::make_shared<tugas_joy::msg::Command>();
    ros2_tugas_joy_msg_Command_common commonObj;
    commonObj.mCommonObjMap = commonObjMap;
    commonObj.copy_from_struct(msg.get(), arr[0], loader);
    return msg;
  }
  matlab::data::StructArray ros2_tugas_joy_Command_message::generateMLMessage(ElementType  /*type*/ ,
                                                    void*  msg ,
                                                    MultiLibLoader  loader ,
                                                    std::map<std::string,std::shared_ptr<MATLABROS2MsgInterfaceBase>>*  commonObjMap ){
    ros2_tugas_joy_msg_Command_common commonObj;	
    commonObj.mCommonObjMap = commonObjMap;	
    MDFactory_T factory;
    return commonObj.get_arr(factory, (tugas_joy::msg::Command*)msg, loader);			
 }
#include "class_loader/register_macro.hpp"
// Register the component with class_loader.
// This acts as a sort of entry point, allowing the component to be discoverable when its library
// is being loaded into a running process.
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_joy_msg_Command_common, MATLABROS2MsgInterface<tugas_joy::msg::Command>)
CLASS_LOADER_REGISTER_CLASS(ros2_tugas_joy_Command_message, ROS2MsgElementInterfaceFactory)
#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif //_MSC_VER