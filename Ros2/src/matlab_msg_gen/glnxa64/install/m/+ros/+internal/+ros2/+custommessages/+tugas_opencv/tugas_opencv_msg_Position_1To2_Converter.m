function ros2msg = tugas_opencv_msg_Position_1To2_Converter(message,ros2msg)
%tugas_opencv_msg_Position_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.red_x_pos = message.RedXPos;
ros2msg.red_y_pos = message.RedYPos;
ros2msg.blue_x_pos = message.BlueXPos;
ros2msg.blue_y_pos = message.BlueYPos;
ros2msg.yellow_x_pos = message.YellowXPos;
ros2msg.yellow_y_pos = message.YellowYPos;
end