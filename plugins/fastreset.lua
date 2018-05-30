local ffi = require("ffi")

local P = {}
local pluginName = "fastreset"

local function P.Reset()
	local funcPtr = engine.Classes.AWillowGameEngine.funcs.Reset.ptr
	
	local out = ""
	for _,code in ipairs(funcPtr.UStruct.Script) do
		out = out .. bit.tohex(code,2) .. " "
	end

	print(funcPtr.UStruct.Script)
	print(out)
end

function P.ExampleHook()

end

function P.ExampleCallback()

end

function P.initialize()
	engineHook.Add("UWillowGameViewportClient", "InputKey", "Reset", function(caller, args)
		local key = args.Key
		local event = args.EventType

		if key == "F5" and event == enum.EInputEvent.IE_Pressed then
			RunTrace()
		end
	end)
end

function P.cleanup()
	engineHook.Remove("UWillowGameViewportClient", "InputKey", "Reset")
end

return P