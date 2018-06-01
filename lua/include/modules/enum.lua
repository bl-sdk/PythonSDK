local enum = {}

function enum.MakeEnum(name, identifiers)
	local newEnum = {}
	for i=1,#identifiers do
		newEnum[identifiers[i]] = (i-1)
	end

	enum[name] = newEnum
end

return enum
