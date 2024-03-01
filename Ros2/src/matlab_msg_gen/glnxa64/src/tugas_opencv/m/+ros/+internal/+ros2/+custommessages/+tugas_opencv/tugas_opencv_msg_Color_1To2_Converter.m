function ros2msg = tugas_opencv_msg_Color_1To2_Converter(message,ros2msg)
%tugas_opencv_msg_Color_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.red = message.Red;
ros2msg.blue = message.Blue;
ros2msg.yellow = message.Yellow;
end