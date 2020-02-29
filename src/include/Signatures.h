#pragma once
#ifndef SIGNATURES_H
#define SIGNATURES_H

#include "MemorySignature.h"

namespace UnrealSDK
{
	namespace Signatures
	{
		MemorySignature GObjects{};
		MemorySignature GNames{};
		MemorySignature ProcessEvent{};
		MemorySignature CallFunction{};
		MemorySignature FrameStep{};
		MemorySignature StaticConstructor{};
		MemorySignature LoadPackage{};
		MemorySignature GMalloc{};
		MemorySignature FNameInit{};
		MemorySignature GetDefaultObject{};
		MemorySignature SetCommand{};

		void InitSignatures(std::string ExeName)
		{
			std::map<std::string,MemorySignature> SignatureMap = game_signature_map[ExeName];
			GObjects = SignatureMap["GObjects"];
			GNames = SignatureMap["GNames"];
			ProcessEvent = SignatureMap["ProcessEvent"];
			CallFunction = SignatureMap["CallFunction"];
			FrameStep = SignatureMap["FrameStep"];
			StaticConstructor = SignatureMap["StaticConstructor"];
			LoadPackage = SignatureMap["LoadPackage"];
			GMalloc = SignatureMap["GMalloc"];
			FNameInit = SignatureMap["FNameInit"];
			GetDefaultObject = SignatureMap["GetDefaultObject"];
			SetCommand = SignatureMap["SetCommand"];
		}
	}
}

#endif
