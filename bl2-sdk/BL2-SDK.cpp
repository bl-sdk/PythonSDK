#include "stdafx.h"
#include "CSimpleDetour.h"
#include "CSigScan.h"
#include "GameHooks.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "PackageFix.h"
#include "AntiDebug.h"
#include "Util.h"
#include "BL2-SDK.h"
#include "Logging.h"
#include "Settings.h"
#include "Exports.h"
#include "gamedefines.h"

namespace BL2SDK
{
	static UConsole * gameConsole = nullptr;

	bool injectedCallNext = false;
	bool logAllProcessEvent = true;
	bool logAllUnrealScriptCalls = true;

	void* pGObjects;
	void* pGNames;
	void* pGObjHash;
	void* pGCRCTable;
	void* pNameHash;
	void* pTextureFixLocation;
	FMalloc** pGMalloc;
	tProcessEvent pProcessEvent;
	tCallFunction pCallFunction;
	tFrameStep pFrameStep;
	tFNameInit pFNameInit;
	tStaticConstructObject pStaticConstructObject;
	tLoadPackage pLoadPackage;
	tByteOrderSerialize pByteOrderSerialize;
	UObject *engine = nullptr;

	CPythonInterface *Python;

	int EngineVersion = -1;
	int ChangelistNumber = -1;

	void __stdcall hkProcessEvent(UFunction* function, void* parms, void* result)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (injectedCallNext)
		{
			injectedCallNext = false;
			pProcessEvent(caller, function, parms, result);
			return;
		}

		if (logAllProcessEvent)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = function->GetFullName();

			Logging::LogF("===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		if (!GameHooks::ProcessEngineHooks(caller, function, parms, result))
		{
			// The engine hook manager told us not to pass this function to the engine
			return;
		}

		pProcessEvent(caller, function, parms, result);
	}

	void __stdcall hkCallFunction(FFrame& stack, void* const result, UFunction* function)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (logAllUnrealScriptCalls)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = function->GetFullName();

			Logging::LogF("===== CallFunction called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		if (!GameHooks::ProcessUnrealScriptHooks(caller, stack, result, function))
		{
			// UnrealScript hook manager already took care of it
			return;
		}

		pCallFunction(caller, stack, result, function);
	}

	void doInjectedCallNext()
	{
		injectedCallNext = true;
	}

	void LogAllProcessEventCalls(bool enabled)
	{
		logAllProcessEvent = enabled;
	}

	void LogAllUnrealScriptCalls(bool enabled)
	{
		logAllUnrealScriptCalls = enabled;
	}

	int unrealExceptionHandler(unsigned int code, struct _EXCEPTION_POINTERS* ep)
	{
		if (IsDebuggerPresent())
		{
			DebugBreak();
		}
		/*
		else if (CrashRptHelper::GenerateReport(code, ep))
		{
			Util::CloseGame();
		}
		*/
		else if (Settings::DisableAntiDebug())
		{
			Util::Popup(L"Fatal Error", std::to_wstring(code).c_str());
			if (IsDebuggerPresent())
			{
				DebugBreak();
			}
		}

		// Don't ever pass it back into the engine
		Util::CloseGame();

		return EXCEPTION_EXECUTE_HANDLER;
	}

	bool getGameVersion(std::wstring& appVersion)
	{
		const wchar_t* filename = L"Borderlands2.exe";

		/*
		// Allocate a block of memory for the version info
		DWORD dummy;
		DWORD size = GetFileVersionInfoSize(filename, &dummy);
		if (size == 0)
		{
			Logging::LogF("[BL2SDK] ERROR: GetFileVersionInfoSize failed with error %d\n", GetLastError());
			return false;
		}

		LPBYTE versionInfo = new BYTE[size];

		// Load the version info
		if (!GetFileVersionInfo(filename, NULL, size, &versionInfo[0]))
		{
			Logging::LogF("[BL2SDK] ERROR: GetFileVersionInfo failed with error %d\n", GetLastError());
			return false;
		}

		// Get the version strings
		VS_FIXEDFILEINFO* ffi;
		unsigned int productVersionLen = 0;

		if (!VerQueryValue(&versionInfo[0], L"\\", (LPVOID*)&ffi, &productVersionLen))
		{
			Logging::Log("[BL2SDK] ERROR: Can't obtain FixedFileInfo from resources\n");
			return false;
		}

		DWORD fileVersionMS = ffi->dwFileVersionMS;
		DWORD fileVersionLS = ffi->dwFileVersionLS;

		delete[] versionInfo;

		appVersion = Util::Format(L"%d.%d.%d.%d",
			HIWORD(fileVersionMS),
			LOWORD(fileVersionMS),
			HIWORD(fileVersionLS),
			LOWORD(fileVersionLS));

			*/
		return true;
	}

	void hookGame()
	{
		CSigScan sigscan(L"Borderlands2.exe");

		// Sigscan for GOBjects
		pGObjects = *(void**)sigscan.Scan(Signatures::GObjects);
		Logging::LogF("[Internal] GObjects = 0x%p\n", pGObjects);

		// Sigscan for GNames
		pGNames = *(void**)sigscan.Scan(Signatures::GNames);
		Logging::LogF("[Internal] GNames = 0x%p\n", pGNames);

		// Sigscan for UObject::ProcessEvent which will be used for pretty much everything
		pProcessEvent = reinterpret_cast<tProcessEvent>(sigscan.Scan(Signatures::ProcessEvent));
		Logging::LogF("[Internal] UObject::ProcessEvent() = 0x%p\n", pProcessEvent);

		// Sigscan for UObject::GObjHash
		pGObjHash = *(void**)sigscan.Scan(Signatures::GObjHash);
		Logging::LogF("[Internal] GObjHash = 0x%p\n", pGObjHash);

		// Sigscan for GCRCTable
		pGCRCTable = *(void**)sigscan.Scan(Signatures::GCRCTable);
		Logging::LogF("[Internal] GCRCTable = 0x%p\n", pGCRCTable);

		// Sigscan for NameHash
		pNameHash = *(void**)sigscan.Scan(Signatures::NameHash);
		Logging::LogF("[Internal] NameHash = 0x%p\n", pNameHash);

		// Sigscan for Unreal exception handler
		void* addrUnrealEH = sigscan.Scan(Signatures::CrashHandler);
		Logging::LogF("[Internal] Unreal Crash handler = 0x%p\n", addrUnrealEH);

		// Sigscan for UObject::CallFunction
		pCallFunction = reinterpret_cast<tCallFunction>(sigscan.Scan(Signatures::CallFunction));
		Logging::LogF("[Internal] UObject::CallFunction() = 0x%p\n", pCallFunction);

		// Sigscan for FFrame::Step
		pFrameStep = reinterpret_cast<tFrameStep>(sigscan.Scan(Signatures::FrameStep));
		Logging::LogF("[Internal] FFrame::Step() = 0x%p\n", pFrameStep);

		// Sigscan for UObject::StaticConstructObject
		pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(sigscan.Scan(Signatures::StaticConstructor));
		Logging::LogF("[Internal] UObject::StaticConstructObject() = 0x%p\n", pStaticConstructObject);

		// Sigscan for UObject::LoadPackage
		pLoadPackage = reinterpret_cast<tLoadPackage>(sigscan.Scan(Signatures::LoadPackage));
		Logging::LogF("[Internal] UObject::LoadPackage() = 0x%p\n", pLoadPackage);

		// Sigscan for FArchive::ByteOrderSerialize
		pByteOrderSerialize = reinterpret_cast<tByteOrderSerialize>(sigscan.Scan(Signatures::ByteOrderSerialize));
		Logging::LogF("[Internal] FArchive::ByteOrderSerialize() = 0x%p\n", pByteOrderSerialize);

		// Sigscan for texture load fix location
		pTextureFixLocation = sigscan.Scan(Signatures::TextureFixLocation);
		Logging::LogF("[Internal] Texture Fix Location = 0x%p\n", pTextureFixLocation);

		// Sigscan for GMalloc and its virtual function table
		pGMalloc = *(FMalloc***)sigscan.Scan(Signatures::GMalloc);
		Logging::LogF("[Internal] GMalloc = 0x%p\n", pGMalloc);

		pFNameInit = reinterpret_cast<tFNameInit>(sigscan.Scan(Signatures::FNameInit));
		Logging::LogF("[Internal] FindOrCreateFName = 0x%p\n", pFNameInit);

		pGetDefaultObject = reinterpret_cast<tGetDefaultObject>(sigscan.Scan(Signatures::GetDefaultObject));
		Logging::LogF("[Internal] GetDefaultObject = 0x%p\n", pGetDefaultObject);


		// Detour UObject::ProcessEvent()
		//SETUP_SIMPLE_DETOUR(detProcessEvent, pProcessEvent, hkProcessEvent);
		CSimpleDetour detProcessEvent(&(PVOID&)pProcessEvent, hkProcessEvent);
		detProcessEvent.Attach();

		//// Detour Unreal exception handler
		////SETUP_SIMPLE_DETOUR(detUnrealEH, addrUnrealEH, unrealExceptionHandler);
		//CSimpleDetour detUnrealEH(&(PVOID&)addrUnrealEH, unrealExceptionHandler);
		//detUnrealEH.Attach();

		// Detour UObject::CallFunction()
		//SETUP_SIMPLE_DETOUR(detCallFunction, pCallFunction, hkCallFunction);
		CSimpleDetour detCallFunction(&(PVOID&)pCallFunction, hkCallFunction);
		detCallFunction.Attach();
	}

	void InitializePython()
	{
		Python = new CPythonInterface();
		PythonStatus status = Python->InitializeModules();
		if (status == PYTHON_MODULE_ERROR && !Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
				L"A core Python module failed to load correctly, and the SDK cannot continue to run.\n\nThis may indicate that BL2 has been patched and the SDK needs updating.");
		}
		else if (status == PYTHON_MODULE_ERROR && Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
				L"An error occurred while loading the Python modules.\n\nPlease check your console for the exact error. Once you've fixed the error, press F11 to reload the Python state.");
		}
		else if (status == PYTHON_OK)
		{
			Logging::LogF("[Internal] Python initialized successfully.\n");
		}
	}

	bool devInputKeyHook(UObject* caller, UFunction* function, void* parms, void* result)
	{
		UWillowGameViewportClient_execInputKey_Parms* realParms = reinterpret_cast<UWillowGameViewportClient_execInputKey_Parms*>(parms);

		// If F11 is pressed
		if (realParms->EventType == 0)
		{
			const char* name = realParms->Key.GetName();
			if (strcmp(name, "F11") == 0)
			{
				/*delete Python;
				InitializePython();*/
				Python->DoFile("init.py");
				return false;
			}
			/*
			else if (strcmp(name, "F10") == 0)
			{
				LogAllProcessEventCalls(!logAllProcessEvent);
			}
			else if (strcmp(name, "F9") == 0)
			{
				LogAllUnrealScriptCalls(!logAllUnrealScriptCalls);
			}
			*/
		}

		return true;
	}

	// This function is used to get the dimensions of the game window for Gwen's renderer
	bool getCanvasPostRender(UObject* caller, UFunction* function, void* parms, void* result)
	{
		InitializePython();

		if (Settings::DeveloperModeEnabled())
		{
			GameHooks::EngineHookManager->Register("WillowGame.WillowGameViewportClient.InputKey", "DevInputKeyHook", &devInputKeyHook);
			Logging::LogF("[Internal] Developer mode key hook enabled\n");
		}

		GameHooks::EngineHookManager->RemoveStaticHook(function, "GetCanvas");
		return true;
	}

	void initializeGameVersions()
	{
		UObject* obj = UObject::GObjObjects()->Data[0];
		EngineVersion = obj->GetEngineVersion();
		ChangelistNumber = obj->GetBuildChangelistNumber();

		Logging::LogF("[Internal] Engine Version = %d, Build Changelist = %d\n", EngineVersion, ChangelistNumber);
	}

	// This function is used to ensure that everything gets called in the game thread once the game itself has loaded
	bool GameReady(UObject* caller, FFrame& stack, void* const result, UFunction* function)
	{
		Logging::LogF("[GameReady] Thread: %i\n", GetCurrentThreadId());

		for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjObjects()->Data[i];

			if (!Object || !Object->Class)
				continue;

			if (!strcmp(Object->GetFullName().c_str(), "WillowGameEngine Transient.WillowGameEngine"))
				engine = Object;
		}

#ifdef _DEBUG
		Logging::InitializeExtern();
#endif
		Logging::InitializeGameConsole();

		initializeGameVersions();

		Logging::PrintLogHeader();

		//// Set console key to Tilde if not already set
		gameConsole = (UConsole *)UObject::Find("WillowConsole", "Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0");
		if (gameConsole && (gameConsole->ConsoleKey == FName("None") || gameConsole->ConsoleKey == FName("Undefined")))
			gameConsole->ConsoleKey = FName("Tilde");

		GameHooks::UnrealScriptHookManager->RemoveStaticHook(function, "StartupSDK");
		GameHooks::EngineHookManager->Register("WillowGame.WillowGameViewportClient.PostRender", "GetCanvas", getCanvasPostRender);

		return true;
	}

	void initialize(wchar_t * exeBaseFolder)
	{
		HookAntiDebug();
		GameHooks::Initialize();
		hookGame();
		//InitializePackageFix();

		LogAllProcessEventCalls(false);
		LogAllUnrealScriptCalls(false);

		GameHooks::UnrealScriptHookManager->Register("Engine.Console.Initialized", "StartupSDK", GameReady);
		//GameHooks::UnrealScriptHookManager->Register("Function Engine.Interaction.NotifyGameSessionEnded", "ExitGame", &cleanup);
	}

	// This is called when the process is closing
	// TODO: Other things might need cleaning up
	void cleanup()
	{
		Logging::Cleanup();
		GameHooks::Cleanup();
		Util::CloseGame();
	}

	void  LoadPackage(const char* filename, DWORD flags, bool force)
	{
		std::wstring wideFilename = Util::Widen(filename);
		SetIsLoadingUDKPackage(true);
		UPackage* result = BL2SDK::pLoadPackage(0, wideFilename.c_str(), flags);
		if (force) {
			for (size_t i = 0; i < UObject::GObjObjects()->Count; ++i)
			{
				UObject* Object = UObject::GObjObjects()->Data[i];
				if (Object->GetPackageObject() == result)
					Object->ObjectFlags.A = Object->ObjectFlags.A | 0x4000;
			}
		}
		SetIsLoadingUDKPackage(false);
	};

	UObject *ConstructObject(UClass* Class, UObject* Outer, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* Template, FOutputDevice *Error, void* InstanceGraph, int bAssumeTemplateIsArchetype)
	{
		if (!Error) {
			Error = new FOutputDevice();
			Error->VfTable = (void *)calloc(2, sizeof(void *));
			((void **)Error->VfTable)[1] = (void *)&Logging::LogW;
		}
		if (!Class)
			return nullptr;
		return BL2SDK::pStaticConstructObject(Class, Outer, Name, SetFlags | 0b1, InternalSetFlags, Template, Error, InstanceGraph, bAssumeTemplateIsArchetype);
	};

	UObject *GetEngine()
	{
		if (!engine)
			engine = UObject::Find("WillowGameEngine", "Transient.WillowGameEngine");
		return engine;
	}
}