#include "stdafx.h"
#include "CSimpleDetour.h"
#include "CSigScan.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "CHookManager.h"
#include "AntiDebug.h"
#include "Util.h"
#include "BL2-SDK.h"
#include "Logging.h"
#include "Settings.h"
#include "Exports.h"
#include "gamedefines.h"
#define STB_IMAGE_IMPLEMENTATION
#include "stb_image.h"

namespace BL2SDK
{
	UConsole * gameConsole = nullptr;

	bool logAllCalls = true;

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
	tFNameInitOld pFNameInit;
	tStaticConstructObject pStaticConstructObject;
	tLoadPackage pLoadPackage;
	tGetDefaultObject pGetDefaultObject;
	UObject *engine = nullptr;
	CHookManager *HookManager = nullptr;
	bool injectedCallNext = false;

	CPythonInterface *Python;

	int EngineVersion = -1;
	int ChangelistNumber = -1;

	std::map<std::string, UClass *> ClassMap = std::map<std::string, UClass *>{};
	void __stdcall hkProcessEvent(UFunction* function, void* params, void* result)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		std::string functionName = function->GetObjectName();
		if (injectedCallNext)
		{
			injectedCallNext = false;
			pProcessEvent(caller, function, params, result);
			return;
		}

		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();

			Logging::LogF("===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		if (HookManager->HasHook(caller, function) && !HookManager->ProcessHooks(functionName, caller, function, &FStruct{ function, params }))
		{
			// The engine hook manager told us not to pass this function to the engine
			return;
		}

		pProcessEvent(caller, function, params, result);
	}

	void __stdcall hkCallFunction(FFrame& stack, void* const result, UFunction* function)
	{
		// Get "this"
		UObject* caller;
		_asm mov caller, ecx;

		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();
			std::string functionName = function->GetFullName();

			// Prevent infinite recursion when printing to console
			if (functionName != "Function Engine.Console.OutputText" && functionName != "Function Engine.Console.OutputTextLine")
				Logging::LogF("===== CallFunction called =====\npCaller Name = %s\npFunction Name = %s\n", callerName.c_str(), functionName.c_str());
		}

		unsigned char *code = stack.Code;

		if (!HookManager->ProcessHooks(caller, stack, result, function))
		{
			stack.SkipFunction();
			return;
		}
		stack.Code = code;
		pCallFunction(caller, stack, result, function);
	}

	void doInjectedCallNext()
	{
		injectedCallNext = true;
	}

	void LogAllCalls(bool enabled)
	{
		logAllCalls = enabled;
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

	void hookGame()
	{
		TCHAR szEXEPath[2048];
		char actualpath[2048];
		GetModuleFileName(NULL, szEXEPath, 2048);
		for (int j = 0; szEXEPath[j] != 0; j++)
			actualpath[j] = (char)szEXEPath[j];
		std::string str(actualpath);
		std::size_t slash = str.find_last_of("/\\") + 1;
		std::size_t dot = str.find_last_of(".");
		Logging::LogF("Found EXE name as '%s.exe'\n", str.substr(slash, dot-slash).c_str());
		CSigScan sigscan(Util::Widen(str.substr(slash, dot - slash) + ".exe").c_str());

		Signatures::InitSignatures(str.substr(slash, dot - slash));

		pGObjects = *(void**)sigscan.Scan(Signatures::GObjects);
		Logging::LogF("[Internal] GObjects = 0x%p\n", pGObjects);

		pGNames = *(void**)sigscan.Scan(Signatures::GNames);
		Logging::LogF("[Internal] GNames = 0x%p\n", pGNames);

		pProcessEvent = reinterpret_cast<tProcessEvent>(sigscan.Scan(Signatures::ProcessEvent));
		Logging::LogF("[Internal] UObject::ProcessEvent() = 0x%p\n", pProcessEvent);

		pCallFunction = reinterpret_cast<tCallFunction>(sigscan.Scan(Signatures::CallFunction));
		Logging::LogF("[Internal] UObject::CallFunction() = 0x%p\n", pCallFunction);

		pFrameStep = reinterpret_cast<tFrameStep>(sigscan.Scan(Signatures::FrameStep));
		Logging::LogF("[Internal] FFrame::Step() = 0x%p\n", pFrameStep);

		pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(sigscan.Scan(Signatures::StaticConstructor));
		Logging::LogF("[Internal] UObject::StaticConstructObject() = 0x%p\n", pStaticConstructObject);

		pLoadPackage = reinterpret_cast<tLoadPackage>(sigscan.Scan(Signatures::LoadPackage));
		Logging::LogF("[Internal] UObject::LoadPackage() = 0x%p\n", pLoadPackage);

		pGMalloc = *(FMalloc***)sigscan.Scan(Signatures::GMalloc);
		Logging::LogF("[Internal] GMalloc = 0x%p\n", pGMalloc);

		pFNameInit = reinterpret_cast<tFNameInitOld>(sigscan.Scan(Signatures::FNameInit));
		Logging::LogF("[Internal] FindOrCreateFName = 0x%p\n", pFNameInit);

		pGetDefaultObject = reinterpret_cast<tGetDefaultObject>(sigscan.Scan(Signatures::GetDefaultObject));
		Logging::LogF("[Internal] GetDefaultObject = 0x%p\n", pGetDefaultObject);

		try {
			void *SetCommand = sigscan.Scan(Signatures::SetCommand);
			DWORD near out = 0;
			if (!VirtualProtectEx(GetCurrentProcess(), SetCommand, 5, 0x40, &out)) {
				Logging::LogF("WINAPI Error when enabling 'SET' commands: %d\n", GetLastError());
			}
			((unsigned char *)SetCommand)[5] = 0xFF;
		}
		catch(std::exception e) {
			Logging::LogF("Exception when enabling 'SET' commands: %d\n", e.what());
		}

		// Detour UObject::ProcessEvent()
		//SETUP_SIMPLE_DETOUR(detProcessEvent, pProcessEvent, hkProcessEvent);
		CSimpleDetour detProcessEvent(&(PVOID&)pProcessEvent, hkProcessEvent);
		detProcessEvent.Attach();

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

	bool getCanvasPostRender(UObject* caller, UFunction* function, FStruct *params)
	{
		// Set console key to Tilde if not already set
		gameConsole = (UConsole *)UObject::Find("WillowConsole", "Transient.WillowGameEngine_0:WillowGameViewportClient_0.WillowConsole_0");
		if (gameConsole == nullptr && engine && ((UEngine *)engine)->GameViewport)
			gameConsole = ((UEngine *)engine)->GameViewport->ViewportConsole;
		if (gameConsole && (gameConsole->ConsoleKey == FName("None") || gameConsole->ConsoleKey == FName("Undefined")))
			gameConsole->ConsoleKey = FName("Tilde");

		InitializePython();

		HookManager->Remove(function->GetObjectName(), "GetCanvas");
		return true;
	}

	void initializeGameVersions()
	{
		EngineVersion = UObject::GetEngineVersion();
		ChangelistNumber = UObject::GetBuildChangelistNumber();

		Logging::LogD("[Internal] Engine Version = %d, Build Changelist = %d\n", EngineVersion, ChangelistNumber);
	}

	// This function is used to ensure that everything gets called in the game thread once the game itself has loaded
	bool GameReady(UObject* caller, UFunction* function, FStruct *params)
	{
		Logging::LogD("[GameReady] Thread: %i\n", GetCurrentThreadId());

		for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjects()->Data[i];

			if (!Object || !Object->Class)
				continue;

			if (!strcmp(Object->Class->GetName().c_str(), "Class"))
				BL2SDK::ClassMap[Object->GetName()] = (UClass *)Object;

			if (!strcmp(Object->GetFullName().c_str(), "WillowGameEngine Transient.WillowGameEngine"))
				engine = Object;
		}
#ifdef _DEBUG
		Logging::InitializeExtern();
#endif

		initializeGameVersions();

		Logging::PrintLogHeader();

		HookManager->Remove(function->GetObjectName(), "StartupSDK");
		HookManager->Register("WillowGame.WillowGameViewportClient.PostRender", "GetCanvas", getCanvasPostRender);

		return true;
	}

	void initialize(wchar_t * exeBaseFolder)
	{
		HookAntiDebug();
		//Logging::SetLoggingLevel("DEBUG");
		HookManager = new CHookManager("EngineHooks");
		hookGame();

		LogAllCalls(false);

		HookManager->Register("Engine.Console.Initialized", "StartupSDK", GameReady);
		//GameHooks::UnrealScriptHookManager->Register("Engine.Interaction.NotifyGameSessionEnded", "ExitGame", &cleanup);
	}

	// This is called when the process is closing
	// TODO: Other things might need cleaning up
	void cleanup()
	{
		Logging::Cleanup();
		delete HookManager;
		HookManager = nullptr;
		Util::CloseGame();
	}

	void  LoadPackage(const char* filename, DWORD flags, bool force)
	{
		std::wstring wideFilename = Util::Widen(filename);
		UPackage* result = BL2SDK::pLoadPackage(0, wideFilename.c_str(), flags);
		if (force) {
			for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
			{
				UObject* Object = UObject::GObjects()->Data[i];
				if (Object->GetPackageObject() == result)
					Object->ObjectFlags.A = Object->ObjectFlags.A | 0x4000;
			}
		}
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

	void RegisterHook(const std::string& funcName, const std::string& hookName, std::function<bool(UObject*, UFunction*, FStruct*)> funcHook) {
		HookManager->Register(funcName, hookName, funcHook);
	}

	bool RemoveHook(const std::string& funcName, const std::string& hookName) {
		return HookManager->Remove(funcName, hookName);
	}

	UObject *LoadTexture(char *Filename, char *TextureName) {
		UTexture2D *NewTexture = (UTexture2D *)UObject::Find("Texture2D", std::string("Transient.") + TextureName);
		if (NewTexture)
			return NewTexture;
		int x, y, n;
		unsigned char *data = stbi_load(Filename, &x, &y, &n, 4);
		if (!data)
			throw std::exception("Unable to parse image file");
		NewTexture = (UTexture2D *)ConstructObject(UObject::FindClass("Texture2D"), GetEngine()->Outer, FName(TextureName), 0x83, 0, nullptr, nullptr, nullptr, false);
		if (!NewTexture)
			return nullptr;
		NewTexture->ObjectFlags.A |= 0x4000;
		NewTexture->SizeX = x;
		NewTexture->OriginalSizeX = x;
		NewTexture->SizeY = y;
		NewTexture->OriginalSizeY = y;
		NewTexture->Format = 2;
		NewTexture->Mips.Data.Dummy = (int)data;
		NewTexture->Mips.ArrayMax = 1;
		NewTexture->Mips.ArrayNum = 1;
		NewTexture->ResidentMips = 1;
		NewTexture->RequestedMips = 1;
		return (UObject *)NewTexture;
	}
}