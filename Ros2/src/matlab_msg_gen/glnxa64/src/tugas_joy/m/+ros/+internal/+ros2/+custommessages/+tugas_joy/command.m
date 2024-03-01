function [data, info] = command
%Command gives an empty data for tugas_joy/Command
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tugas_joy/Command';
[data.x_cmd, info.x_cmd] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.y_cmd, info.y_cmd] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.yaw, info.yaw] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.depth, info.depth] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.x_button, info.x_button] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'tugas_joy/Command';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'x_cmd';
info.MatPath{2} = 'y_cmd';
info.MatPath{3} = 'yaw';
info.MatPath{4} = 'depth';
info.MatPath{5} = 'x_button';
