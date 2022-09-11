#pragma once

#include <stdafx.h>
#include "MemorySignature.h"

namespace UnrealSDK {

// TODO: Check what all actually depends on ue3/4 - these are just based on what sigs existed
//       Realloc probably doesn't for example

struct game_data {
#ifdef _DEBUG
	std::string _name;
#endif
	MemorySignature GObjects;
	MemorySignature GNames;
	MemorySignature ProcessEvent;
	MemorySignature CallFunction;
	MemorySignature FrameStep;
	MemorySignature StaticConstructor;
#if UE3
	MemorySignature LoadPackage;
#endif
	MemorySignature GMalloc;
#if UE4
	MemorySignature Realloc;
#endif
	MemorySignature FNameInit;
#if UE3
	MemorySignature FNameInitChar;
#endif
	MemorySignature GetDefaultObject;
#if UE4
	MemorySignature StaticExec;
#endif
#if UE3
	MemorySignature SetCommand;
	MemorySignature ArrayLimit;
	MemorySignature ArrayLimitMessage;
#endif

	std::string ConsoleObjectType;
	std::string ConsoleObjectName;
	std::string EngineObjectType;
	std::string EngineObjectName;
	std::string EngineFullName;
	std::string PostRenderFunction;
	std::string StartupSDK;
};

/**
 * @brief Get the game data struct for the current game.
 *
 * @return A game data struct.
 */
const struct game_data get_game_data(const std::string& exe_name);

}  // namespace UnrealSDK
