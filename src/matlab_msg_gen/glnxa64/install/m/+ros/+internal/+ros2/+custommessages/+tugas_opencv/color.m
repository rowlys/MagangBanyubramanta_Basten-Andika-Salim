function [data, info] = color
%Color gives an empty data for tugas_opencv/Color
% Copyright 2019-2021 The MathWorks, Inc.
data = struct();
data.MessageType = 'tugas_opencv/Color';
[data.red, info.red] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.blue, info.blue] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
[data.green, info.green] = ros.internal.ros2.messages.ros2.default_type('int32',1,0);
info.MessageType = 'tugas_opencv/Color';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'red';
info.MatPath{2} = 'blue';
info.MatPath{3} = 'green';
