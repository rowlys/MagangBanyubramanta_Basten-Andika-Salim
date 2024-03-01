function slBusOut = Command(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.x_cmd = int32(msgIn.x_cmd);
    slBusOut.y_cmd = int32(msgIn.y_cmd);
    slBusOut.yaw = int32(msgIn.yaw);
    slBusOut.depth = int32(msgIn.depth);
    slBusOut.x_button = int32(msgIn.x_button);
end
