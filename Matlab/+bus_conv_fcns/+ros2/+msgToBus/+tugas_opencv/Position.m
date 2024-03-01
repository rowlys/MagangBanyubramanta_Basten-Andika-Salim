function slBusOut = Position(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.red_x_pos = int32(msgIn.red_x_pos);
    slBusOut.red_y_pos = int32(msgIn.red_y_pos);
    slBusOut.blue_x_pos = int32(msgIn.blue_x_pos);
    slBusOut.blue_y_pos = int32(msgIn.blue_y_pos);
    slBusOut.yellow_x_pos = int32(msgIn.yellow_x_pos);
    slBusOut.yellow_y_pos = int32(msgIn.yellow_y_pos);
end
