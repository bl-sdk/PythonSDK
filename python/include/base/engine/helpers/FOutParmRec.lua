local ffi = require("ffi")
local string = string

local FOutParmRecMT = {}

function FOutParmRecMT.PrintInfo(self)
	if self == nil then return end

	print("FOutParmRec:")
	print(string.format("    Property = %s", self.Property:GetFullName()))
	print(string.format("    PropAddr = %s", tostring(self.PropAddr)))
	print(string.format("    NextOutParm = %s", tostring(self.NextOutParm)))

	if self.NextOutParm ~= nil then
		self.NextOutParm:PrintInfo()
	end
end

ffi.metatype("struct FOutParmRec", { __index = FOutParmRecMT })
