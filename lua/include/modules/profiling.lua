local os = os
local string = string
local print = print
local collectgarbage = collectgarbage

local timers = {}
local memTracks = {}

local profiling = {}

function profiling.StartTimer(id, name)
	if timers[id] ~= nil then
		print("[Profiling] Warning: Timer '" .. name .. "' not stopped")
	end

	timers[id] = { name = name, start = os.clock() }
end

function profiling.StopTimer(id)
	local timer = timers[id]
	if timer ~= nil then
		local elapsed = os.clock() - timer.start
		print(string.format("[Profiling] %s took %.3f seconds", timer.name, elapsed))
		timers[id] = nil
	else
		print("[Profiling] Warning: Timer '" .. id .. "' not started")
	end
end

function profiling.TrackMemory(id, name)
	if memTracks[id] ~= nil then
		print("[Profiling] Warning: Memory tracker '" .. name .. "' overwritten")
	end

	memTracks[id] = { name = name, start = collectgarbage("count") }
end

function profiling.GetMemoryUsage(id)
	local memTrack = memTracks[id]
	if memTrack ~= nil then
		local diff = collectgarbage("count") - memTrack.start
		print(string.format("[Profiling] %s used %.3f kB mem", memTrack.name, diff))
		memTracks[id] = nil
	else
		print("[Profiling] Warning: Memory tracker '" .. id .. "' not initialized")
	end
end

return profiling
