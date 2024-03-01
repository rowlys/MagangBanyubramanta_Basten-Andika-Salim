function ros1msg = tugas_joy_msg_Command_2To1_Converter(message,ros1msg)
%tugas_joy_msg_Command_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.XCmd = message.x_cmd;
ros1msg.YCmd = message.y_cmd;
ros1msg.Yaw = message.yaw;
ros1msg.Depth = message.depth;
ros1msg.XButton = message.x_button;
end