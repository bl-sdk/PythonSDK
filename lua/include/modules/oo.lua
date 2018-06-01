local error = error
local string = string

local oo = {}

function oo.NotImplemented(class, name, ...)
	class[name] = function(self) 
		error(string.format("Missing function definition for %q in %q", name, self._ClassName))
	end
end

function oo.InheritClass(baseClass, newName)
	if baseClass == nil then
		error("Base class was nil!")
	end
	
	local newClass = table.copy(baseClass)
	newClass._ClassName = newName
	newClass._BaseClass = baseClass
	newClass.New = function()
		local obj = setmetatable({}, { __index = newClass })
		return obj
	end
	
	return newClass
end

function oo.CreateClass(name)
	local class = {}
	class._ClassName = name
	class.New = function()
		local obj = setmetatable({}, { __index = class })
		return obj
	end

	return class
end

return oo
