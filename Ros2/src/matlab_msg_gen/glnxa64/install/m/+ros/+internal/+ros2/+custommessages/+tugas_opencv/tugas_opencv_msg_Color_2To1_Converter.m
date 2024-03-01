function ros1msg = tugas_opencv_msg_Color_2To1_Converter(message,ros1msg)
%tugas_opencv_msg_Color_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Red = message.red;
ros1msg.Blue = message.blue;
ros1msg.Yellow = message.yellow;
end