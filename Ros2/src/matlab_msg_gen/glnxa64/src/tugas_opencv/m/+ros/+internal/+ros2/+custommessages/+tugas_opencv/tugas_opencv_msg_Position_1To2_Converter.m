function ros2msg = tugas_opencv_msg_Position_1To2_Converter(message,ros2msg)
%tugas_opencv_msg_Position_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.x_pos = message.XPos;
ros2msg.y_pos = message.YPos;
end