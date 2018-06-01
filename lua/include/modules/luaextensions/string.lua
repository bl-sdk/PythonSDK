local string = string
local table = table

-- Taken from http://lua-users.org/wiki/StringTrim
function string.Trim(s)
	local from = s:match"^%s*()"
	return from > #s and "" or s:match(".*%S", from)
end

-- Taken from http://lua-users.org/wiki/SplitJoin
function string.Explode(p, d)
	local t = {}
	local ll = 0
	if #p == 1 then return {p} end
	while true do
		l = string.find(p, d, ll, true) -- find the next d in the string
		if l ~= nil then -- if "not not" found then..
			table.insert(t, string.sub(p, ll, l-1)) -- Save it in our array.
			ll = l + 1 -- save just after where we found it for searching next time.
		else
			table.insert(t, string.sub(p, ll)) -- Save what's left in our array.
			break -- Break at end, as it should be, according to the lua manual.
		end
	end
	return t
end
