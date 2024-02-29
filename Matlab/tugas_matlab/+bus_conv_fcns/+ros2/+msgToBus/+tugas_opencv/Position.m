function slBusOut = Position(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.x_pos = int32(msgIn.x_pos);
    slBusOut.y_pos = int32(msgIn.y_pos);
end
