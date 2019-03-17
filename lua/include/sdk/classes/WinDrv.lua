
local ffi = require("ffi")

ffi.cdef[[

// 0x1F0 
struct UWindowsClient_Data {
	// Last Offset: 0x50
	const unsigned char Unknown1[0x15C]; // 0x50 (0x15C) > LAST OFFSET
	struct UClass* AudioDeviceClass; // 0x1AC (0x4)
	const unsigned char Unknown2[0x30]; // 0x1B0 (0x30) > LAST OFFSET
	int AllowJoystickInput; // 0x1E0 (0x4)
	const unsigned char Unknown3[0xC]; // 0x1E4 (0xC) MISSING END DATA
};

struct UWindowsClient {
	struct UObject_Data UObject;
	struct UClient_Data UClient;
	struct UWindowsClient_Data UWindowsClient;
};

// 0x58 
struct UXnaForceFeedbackManager_Data {
	// Last Offset: 0x58
};

struct UXnaForceFeedbackManager {
	struct UObject_Data UObject;
	struct UForceFeedbackManager_Data UForceFeedbackManager;
	struct UXnaForceFeedbackManager_Data UXnaForceFeedbackManager;
};

// 0xEC 
struct UFacebookWindows_Data {
	// Last Offset: 0xB4
	const unsigned char Unknown1[0x38]; // 0xB4 (0x38) MISSING END DATA
};

struct UFacebookWindows {
	struct UObject_Data UObject;
	struct UFacebookIntegration_Data UFacebookIntegration;
	struct UFacebookWindows_Data UFacebookWindows;
};
]]

table.insert(g_loadedClasses, { "UWindowsClient", 3566, "UClient" })
table.insert(g_loadedClasses, { "UXnaForceFeedbackManager", 3570, "UForceFeedbackManager" })
table.insert(g_loadedClasses, { "UFacebookWindows", 3572, "UFacebookIntegration" })
