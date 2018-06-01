local bit = require("bit")

local flags = {}

function flags.IsSet(field, flag)
	return bit.band(field, flag) ~= 0
end

return flags

