function ros2msg = tugas_yolo_yolocpp_msg_Seen_1To2_Converter(message,ros2msg)
%tugas_yolo_yolocpp_msg_Seen_1To2_Converter passes data of ROS message to ROS 2 message.
% Copyright 2019 The MathWorks, Inc.
ros2msg.gate = message.Gate;
ros2msg.flare = message.Flare;
end