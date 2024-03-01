function [data, info] = position
%Position gives an empty data for tugas_opencv/Position
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tugas_opencv/Position';
[data.red_x_pos, info.red_x_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.red_y_pos, info.red_y_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.blue_x_pos, info.blue_x_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.blue_y_pos, info.blue_y_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.yellow_x_pos, info.yellow_x_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.yellow_y_pos, info.yellow_y_pos] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'tugas_opencv/Position';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,6);
info.MatPath{1} = 'red_x_pos';
info.MatPath{2} = 'red_y_pos';
info.MatPath{3} = 'blue_x_pos';
info.MatPath{4} = 'blue_y_pos';
info.MatPath{5} = 'yellow_x_pos';
info.MatPath{6} = 'yellow_y_pos';
