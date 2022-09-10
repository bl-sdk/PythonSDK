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
		MemorySignature Realloc{};
		MemorySignature FNameInit{};
		MemorySignature FNameInitChar{};
		MemorySignature GetDefaultObject{};
		MemorySignature SetCommand{};
		MemorySignature StaticExec{};

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
			Realloc = SignatureMap["Realloc"];
			FNameInit = SignatureMap["FNameInit"];
			if (SignatureMap.count("FNameInitChar")) {
				FNameInitChar = SignatureMap["FNameInitChar"];
			}
			GetDefaultObject = SignatureMap["GetDefaultObject"];
			SetCommand = SignatureMap["SetCommand"];
			if (SignatureMap.count("StaticExec")) StaticExec = SignatureMap["StaticExec"];
		}
	}
}

#endif
