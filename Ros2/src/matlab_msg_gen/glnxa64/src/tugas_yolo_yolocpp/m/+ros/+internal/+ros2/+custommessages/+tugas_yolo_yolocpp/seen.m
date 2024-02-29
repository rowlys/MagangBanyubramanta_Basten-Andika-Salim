function [data, info] = seen
%Seen gives an empty data for tugas_yolo_yolocpp/Seen
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tugas_yolo_yolocpp/Seen';
[data.gate, info.gate] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.flare, info.flare] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'tugas_yolo_yolocpp/Seen';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'gate';
info.MatPath{2} = 'flare';
