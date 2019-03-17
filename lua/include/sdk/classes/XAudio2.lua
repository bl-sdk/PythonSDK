
local ffi = require("ffi")

ffi.cdef[[

// 0x360  (Alignment = 16)
struct UXAudio2Device_Data {
	// Last Offset: 0x2C4
	const unsigned char Unknown1[0x9C]; // 0x2C4 (0x9C) MISSING END DATA
};

struct UXAudio2Device {
	struct UObject_Data UObject;
	struct USubsystem_Data USubsystem;
	struct UAudioDevice_Data UAudioDevice;
	struct UXAudio2Device_Data UXAudio2Device;
};
]]

table.insert(g_loadedClasses, { "UXAudio2Device", 3522, "UAudioDevice" })
