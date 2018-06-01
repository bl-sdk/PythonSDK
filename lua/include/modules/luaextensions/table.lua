local type = type
local pairs = pairs
local ipairs = ipairs

local inpsect = require("luaextensions.inspect").inspect
function PrintTable(tbl)
	print(inspect(tbl))
end

function IsTable(data)
	return type(data) == "table"
end

-- Taken from http://lua-users.org/wiki/PitLibTablestuff
function table.copy(t, lookup_table)
	local copy = {}
	for i,v in pairs(t) do
		if not IsTable(v) then
			copy[i] = v
		else
			lookup_table = lookup_table or {}
			lookup_table[t] = copy
			if lookup_table[v] then
				copy[i] = lookup_table[v] -- we already copied this table. reuse the copy.
			else
				copy[i] = table.copy(v,lookup_table) -- not yet copied. copy it.
			end
		end
	end
	return copy
end

-- Returns whether or not the specified table (numerically indexed) contains "element"
function table.contains(t, element)
	for _,v in ipairs(t) do
		if v == element then
			return true
		end
	end
	return false
end

-- Returns the first index of value in the specified table (numerically indexed) or nil
function table.ifind(t, value)
	for k,v in ipairs(t) do
		if v == value then
			return k
		end
	end

	return nil
end

-- Returns the first index of value in the specified table (with string indexes) or nil
function table.find(t, value)
	for k,v in pairs(t) do
		if v == value then
			return k
		end
	end

	return nil
end

-- Returns the number of elements in a table with any type of key
function table.count(t)
	local count = 0
	for k,v in pairs(t) do
		count = count + 1
	end

	return count
end

-- Removes the first instance of value in a string or numerically indexed table
function table.removeValue(t, value)
	local key = table.find(t, value)
	if not key then return false end
	
	table.remove(t, key)
	return key
end
