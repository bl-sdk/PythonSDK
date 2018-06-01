--[[
	This file contains the necessary structs for generating the SDK
	DO NOT MODIFY
]]

local ffi = require("ffi")

ffi.cdef[[
	struct TArray {
		unsigned char* Data;
		int Count;
		int Max;
	};

	struct FNameEntry {
		unsigned char Unknown[0x8];
		int Index;
		struct FNameEntry* HashNext;
		char Name[1024];
	};

	struct FName { 
		int Index;
		int Number;
	};

	struct FString {
		wchar_t* Data;
		int Count;
		int Max;
	};

	struct FScriptDelegate {
		struct UObject* Object;
		struct FName FunctionName;
	};

	struct FPointer {
		void* Pointer;
	};

	struct FQWord {
		int A;
		int B;
	};

	struct FScriptInterface {
		struct UObject* ObjectPointer; 
		void* InterfacePointer; 
	};

	struct FOutputDevice {
		void* VfTable;
		unsigned long bAllowSuppression;
		unsigned long bSuppressEventTag;
		unsigned long bAutoEmitLineTerminator;
	};

	struct FOutParmRec {
		struct UProperty* Property;
		unsigned char* PropAddr;
		struct FOutParmRec* NextOutParm;
	};
	
	struct FFrame {
		void* VfTable;
		unsigned long bAllowSuppression;
		unsigned long bSuppressEventTag;
		unsigned long bAutoEmitLineTerminator;

		struct UStruct* Node;
		struct UObject* Object;
		unsigned char* Code;
		unsigned char* Locals;

		struct FFrame* PreviousFrame;
		struct FOutParmRec* OutParms;
	};
]]
