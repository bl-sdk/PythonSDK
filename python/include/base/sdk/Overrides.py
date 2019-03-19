import BL2SDK
from ctypes import *

class TArray_Base(Structure):
    def __getitem__(self, index):
        return self.Data[index]

    def __len__(self):
        return self.Count
    
    def __iter__(self):
        for value in range(self.Count):
            if self.Data[value]:
                yield self.Data[value][0]

BL2SDK.TArray_Base = TArray_Base

class UObject_Base(Structure):
    def GetName(self):
        return BL2SDK.engine.Names[self.UObject.Name.Index][0].Name.decode(encoding='UTF-8')

    def GetFullName(self):
        return BL2SDK.GetFullName(self.UObject)

BL2SDK.UObject_Base = UObject_Base

# -- TOOD: Fix this steaming pile of shit.
# function funcs.GetCName(self)
# 	local cname
# 	if self:IsA(engine.Classes.UClass) then
# 		cname = "U" -- Just a plain old object by default

# 		local class = ffi.cast("struct UClass*", self)
# 		while class ~= nil do
# 			if class:GetName() == "Actor" then
# 				cname = "A"
# 				break
# 			end
# 			class = ffi.cast("struct UClass*", class.UStruct.SuperField)
# 		end
# 	else
# 		cname = "F"
# 	end

# 	return cname .. self:GetName()
# end

# function funcs.GetPackageObject(self)
# 	local pkg
# 	local outer = self.UObject.Outer

# 	while outer ~= nil do
# 		pkg = outer
# 		outer = outer.UObject.Outer
# 	end

# 	return pkg
# end

# local UObject = {}
# UObject.BaseFuncs = funcs

# return UObject
