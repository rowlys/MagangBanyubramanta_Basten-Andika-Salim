function slBusOut = Seen(msgIn, slBusOut, varargin)
%#codegen
%   Copyright 2021-2022 The MathWorks, Inc.
    slBusOut.gate = int32(msgIn.gate);
    slBusOut.flare = int32(msgIn.flare);
end
