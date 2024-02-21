function [data, info] = position
%Position gives an empty data for tugas_opencv/Position
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tugas_opencv/Position';
[data.x_pos, info.x_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.y_pos, info.y_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'tugas_opencv/Position';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'x_pos';
info.MatPath{2} = 'y_pos';
