#include <stdafx.h>

#include "Games.h"
#include "MemorySignature.h"

namespace UnrealSDK {

using game_data_map = std::unordered_map<std::string, struct game_data>;

#if UE3

static struct game_data bl2_data = {
	// GObjects
	make_sig("\x00\x00\x00\x00\x8B\x04\xB1\x8B\x40\x08", "????xxxxxx"),
	// GNames
	make_sig("\x00\x00\x00\x00\x83\x3C\x81\x00\x74\x5C", "????xxxxxx"),
	// ProcessEvent
	make_sig("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x50\xA1"
			 "\x00\x00\x00\x00\x33\xC5\x89\x45\xF0\x53\x56\x57\x50\x8D\x45\xF4\x64\xA3\x00\x00\x00"
			 "\x00\x8B\xF1\x89\x75\xEC",
			 "xxxxxx????xx????xxxxx????xxxxxxxxxxxxxx????xxxxx"),
	// CallFunction
	make_sig("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x81\xEC\x00\x00"
			 "\x00\x00\xA1\x00\x00\x00\x00\x33\xC5\x89\x45\xF0\x53\x56\x57\x50\x8D\x45\xF4\x64\xA3"
			 "\x00\x00\x00\x00\x8B\x7D\x10\x8B\x45\x0C",
			 "xxxxxx????xx????xxx????x????xxxxxxxxxxxxxx????xxxxxx"),
	// FrameStep
	make_sig("\x55\x8B\xEC\x8B\x41\x18\x0F\xB6\x10", "xxxxxxxxx"),
	// StaticConstructor
	make_sig("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x10\x53"
			 "\x56\x57\xA1\x00\x00\x00\x00\x33\xC5\x50\x8D\x45\xF4\x64\xA3\x00\x00\x00\x00\x8B\x7D"
			 "\x08\x8A\x87",
			 "xxxxxx????xx????xxxxxxxx????xxxxxxxx????xxxxx"),
	// LoadPackage
	make_sig("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x64\xA1\x00\x00\x00\x00\x50\x83\xEC\x68\xA1"
			 "\x00\x00\x00\x00\x33\xC5\x89\x45\xEC",
			 "xxxxxx????xx????xxxxx????xxxxx"),
	// GMalloc
	make_sig("\x00\x00\x00\x00\xFF\xD7\x83\xC4\x04\x89\x45\xE4", "????xxxxxxxx"),
	// Realloc (Not in UE3)
	// FNameInit
	make_sig("\x55\x8B\xEC\x6A\xFF\x68\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x50\x81\xEC\x9C\x0C",
			 "xxxxxx??????xxxxxxxxx"),
	// FNameInitChar
	make_sig("\x55\x8B\xEC\x83\xEC\x08\x53\x8B\xD9\x89\x5D\x00", "xxxxxxxxxxx?"),
	// GetDefaultObject
	make_sig("\x55\x8B\xEC\x56\x8B\xF1\x83\xBE\x00\x01\x00\x00\x00\x57\x0F\x85",
			 "xxxxxxxx?xxxxxxx"),
	// SetCommand
	make_sig("\xFF\x83\xC4\x0C\x85\xC0\x75\x1A\x6A\x01\x8D", "xxxxxxxxxxx"),
	// StaticExec (Not in UE3)

	// =========================================================================

	// ConsoleObjectType
	"WillowConsole",
	// ConsoleObjectName
	"Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0",
	// EngineObjectType
	"WillowGameEngine",
	// EngineObjectName
	"Transient.WillowGameEngine",
	// EngineFullName
	"WillowGameEngine Transient.WillowGameEngine",
	// PostRenderFunction
	"WillowGame.WillowGameViewportClient.PostRender",
	// StartupSDK
	"Engine.Console.Initialized",
};

static struct game_data tps_aodk_data =
	{
		// clang-format off
	bl2_data.GObjects,
	// GNames
	make_sig("\x00\x00\x00\x00\x8B\x04\xB1\x5E\x5D\xC3\x8B\x15", "????xxxxxxxx"),
	bl2_data.ProcessEvent,
	bl2_data.CallFunction,
	bl2_data.FrameStep,
	bl2_data.StaticConstructor,
	bl2_data.LoadPackage,
	bl2_data.GMalloc,
	// Realloc (Not in UE3)
	bl2_data.FNameInit,
	bl2_data.FNameInitChar,
	bl2_data.GetDefaultObject,
	bl2_data.SetCommand,
	// StaticExec (Not in UE3)
	bl2_data.ConsoleObjectType,
	bl2_data.ConsoleObjectName,
	bl2_data.EngineObjectType,
	bl2_data.EngineObjectName,
	bl2_data.EngineFullName,
	bl2_data.PostRenderFunction,
	bl2_data.StartupSDK,
		// clang-format on
}

static game_data_map game_map = {
	{"Borderlands2", bl2_data},
	{"BorderlandsPreSequel", tps_aodk_data},
	{"TinyTina", tps_aodk_data},
};

#elif UE4

static struct game_data bl3_data = {
	// GObjects
	make_sig("\x48\x8d\x0d\x00\x00\x00\x00\xc6\x05\x00\x00\x00\x00\x01\xe8\x00\x00\x00\x00\xc6\x05",
			 "xxx????xx????xx????xx"),
	// GNames
	make_sig(
		"\xE8\x00\x00\x00\x00\x48\x00\x00\x48\x89\x1D\x00\x00\x00\x00\x48\x8B\x5C\x24\x00\x48\x83"
		"\xC4\x28\xC3\x00\xDB\x48\x89\x1D\x00\x00\x00\x00\x00\x00\x48\x8B\x5C\x24\x00\x48\x83\xC4"
		"\x00\xC3",
		"x????x??xxx????xxxx?xxxxx?xxxx??????xxxx?xxx?x"),
	// ProcessEvent
	make_sig("\x40\x55\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xec\xf0\x00\x00\x00",
			 "xxxxxxxxxxxxxxxxxxx"),
	// CallFunction
	make_sig(
		"\x40\x55\x53\x56\x57\x41\x54\x41\x55\x41\x56\x41\x57\x48\x81\xec\x28\x01\x00\x00\x48\x8d"
		"\x6c\x24\x30",
		"xxxxxxxxxxxxxxxxxxxxxxxxx"),
	// FrameStep
	make_sig("\x48\x8B\x41\x20\x4C\x8B\xD2\x48\x8B\xD1", "xxxxxxxxxx"),
	// StaticConstructor
	make_sig("\xE8\x00\x00\x00\x00\x41\x89\x3E\x4D\x8D\x46\x04", "x????xxxxxxx"),
	// LoadPackage (not in UE4)
	// GMalloc
	make_sig("\xE8\x00\x00\x00\x00\x4C\x63\x7B\x40", "x????xxxx"),
	// Realloc
	make_sig("\xE8\x00\x00\x00\x00\x48\x89\x07\x33\xC9", "x????xxxxx"),
	// FNameInit
	make_sig("\x40\x53\x48\x83\xEC\x30\xC7\x44\x24\x00\x00\x00\x00\x00", "xxxxxxxxx?????"),
	// FNameInitChar (not in UE4)
	// GetDefaultObject
	make_sig(
		"\x48\x85\xD2\x0F\x84\x00\x00\x00\x00\x4C\x8B\xDC\x57\x48\x81\xEC\x00\x00\x00\x00\x48\x8B"
		"\x05\x00\x00\x00\x00\x48\x33\xC4\x48\x89\x84\x24\x00\x00\x00\x00\x48\x8B\xC2",
		"xxxxx????xxxxxxx????xxx????xxxxxxx????xxx"),
	// SetCommand (not in UE4)
	// StaticExec
	make_sig("\xE8\x00\x00\x00\x00\x3C\x01\x0F\x84\x00\x00\x00\x00\x48\x8B\x0D\x00\x00\x00\x00",
			 "x????xxxx????xxx????"),

	// =========================================================================

	// ConsoleObjectType
	"Console",
	// ConsoleObjectName
	"/Script/Engine.Default__Console",
	// EngineObjectType
	"/Script/OakGame.OakGameEngine",
	// EngineObjectName
	"/Engine/Transient.OakGameEngine",
	// EngineFullName
	"OakGameEngine /Engine/Transient.OakGameEngine",
	// PostRenderFunction
	"/Script/Engine.HUD.ReceiveDrawHUD",
	// StartupSDK
	"/Script/OakGame.MenuMapMenuFlow.Start",
};

static struct game_data wl_data = {
	// clang-format off
	bl3_data.GObjects,
	bl3_data.GNames,
	bl3_data.ProcessEvent,
	bl3_data.CallFunction,
	bl3_data.FrameStep,
	bl3_data.StaticConstructor,
	// LoadPackage (not in UE3)
	bl3_data.GMalloc,
	bl3_data.Realloc,
	bl3_data.FNameInit,
	// FNameInitChar (not in UE3)
	bl3_data.GetDefaultObject,
	// SetCommand (not in UE3)
	bl3_data.StaticExec,
	bl3_data.ConsoleObjectType,
	bl3_data.ConsoleObjectName,
	bl3_data.EngineObjectType,
	bl3_data.EngineObjectName,
	bl3_data.EngineFullName,
	bl3_data.PostRenderFunction,
	"/Script/OakGame.MenuMapMenuFlow.start",  // Lowercase 's' ¯\_(ツ)_/¯
	// clang-format on
};

static game_data_map game_map = {
	{"Borderlands3", bl3_data},
	{"Wonderlands", wl_data},
};

#endif

struct game_data get_game_data(std::string exe_name) {
	if (game_map.count(exe_name)) {
		return game_map[exe_name];
	}

	// For an unknown game, return an arbitrary entry
	return game_map.begin()->second;
}

}  // namespace UnrealSDK
