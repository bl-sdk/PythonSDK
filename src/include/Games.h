#pragma once

#include <stdafx.h>
#include "MemorySignature.h"

namespace UnrealSDK {

// TODO: Check what all actually depends on ue3/4 - these are just based on what sigs existed
//       Realloc probably doesn't for example

struct game_data {
	const MemorySignature GObjects;
	const MemorySignature GNames;
	const MemorySignature ProcessEvent;
	const MemorySignature CallFunction;
	const MemorySignature FrameStep;
	const MemorySignature StaticConstructor;
#if UE3
	const MemorySignature LoadPackage;
#endif
	const MemorySignature GMalloc;
#if UE4
	const MemorySignature Realloc;
#endif
	const MemorySignature FNameInit;
#if UE3
	const MemorySignature FNameInitChar;
#endif
	const MemorySignature GetDefaultObject;
#if UE3
	const MemorySignature SetCommand;
#endif
#if UE4
	const MemorySignature StaticExec;
#endif

	const std::string ConsoleObjectType;
	const std::string ConsoleObjectName;
	const std::string EngineObjectType;
	const std::string EngineObjectName;
	const std::string EngineFullName;
	const std::string PostRenderFunction;
	const std::string StartupSDK;
};

/**
 * @brief Get the game data struct for the current game.
 *
 * @return A game data struct.
 */
game_data get_game_data(std::string exe_name);

}  // namespace UnrealSDK
