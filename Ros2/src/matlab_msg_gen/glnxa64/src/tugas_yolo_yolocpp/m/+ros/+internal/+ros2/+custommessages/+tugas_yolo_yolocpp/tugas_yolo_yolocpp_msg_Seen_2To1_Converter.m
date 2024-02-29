function ros1msg = tugas_yolo_yolocpp_msg_Seen_2To1_Converter(message,ros1msg)
%tugas_yolo_yolocpp_msg_Seen_2To1_Converter passes data of ROS 2 message to ROS message.
% Copyright 2019 The MathWorks, Inc.    
ros1msg.Gate = message.gate;
ros1msg.Flare = message.flare;
end