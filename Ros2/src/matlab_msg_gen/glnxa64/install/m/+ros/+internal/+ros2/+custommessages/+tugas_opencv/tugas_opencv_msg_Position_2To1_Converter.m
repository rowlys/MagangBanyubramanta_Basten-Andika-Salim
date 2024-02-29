function ros1msg = tugas_opencv_msg_Position_2To1_Converter(message,ros1msg)
%tugas_opencv_msg_Position_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.XPos = message.x_pos;
ros1msg.YPos = message.y_pos;
end