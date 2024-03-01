function slBusOut = Color(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.red = int32(msgIn.red);
    slBusOut.blue = int32(msgIn.blue);
    slBusOut.yellow = int32(msgIn.yellow);
end
