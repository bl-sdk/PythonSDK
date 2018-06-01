local table = table
local assert = assert
local loadstring = loadstring
local loadfile = loadfile

command.Add("l", function(cmd, args)
	local res = { assert(loadstring(table.concat(args, " "), "LuaCommand"))() }
	if #res > 0 then
		print(unpack(res))
	end
end)

command.Add("lo", function(cmd, args)
	assert(loadfile(table.concat(args, " "), "LuaCommand"))()
end)
