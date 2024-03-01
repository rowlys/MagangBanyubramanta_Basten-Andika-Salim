function ros1msg = tugas_opencv_msg_Position_2To1_Converter(message,ros1msg)
%tugas_opencv_msg_Position_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.RedXPos = message.red_x_pos;
ros1msg.RedYPos = message.red_y_pos;
ros1msg.BlueXPos = message.blue_x_pos;
ros1msg.BlueYPos = message.blue_y_pos;
ros1msg.YellowXPos = message.yellow_x_pos;
ros1msg.YellowYPos = message.yellow_y_pos;
end