function slBusOut = Color(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.red = int32(msgIn.red);
    slBusOut.blue = int32(msgIn.blue);
    slBusOut.green = int32(msgIn.green);
end
