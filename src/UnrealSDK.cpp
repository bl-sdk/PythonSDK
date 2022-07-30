#include "stdafx.h"
#include "CSigScan.h"
#include "Exceptions.h"
#include "Signatures.h"
#include "CHookManager.h"
#include "Util.h"
#include <utility>
#include "Logging.h"
#include "Settings.h"
#include "Exports.h"
#include "gamedefines.h"

#include <fstream>

namespace UnrealSDK
{
	UConsole* gameConsole = nullptr;

	bool logAllCalls = true;

	void* pGObjects;

	void* pGNames;
	void* pGObjHash;
	void* pGCRCTable;
	void* pNameHash;
	tProcessEvent pProcessEvent;
	tCallFunction pCallFunction;
	tFrameStep pFrameStep;
	void* pFNameInit;
	tStaticConstructObject pStaticConstructObject;
	tLoadPackage pLoadPackage;
	tGetDefaultObject pGetDefaultObject;
	UObject* gEngine = nullptr;
	CHookManager* gHookManager = nullptr;
	bool gInjectedCallNext = false;
	bool gCallPostEdit = true;

#ifdef UE4
	tStaticExec pStaticExec;
	tStaticExec oStaticExec = nullptr;
	tMalloc pGMalloc;
	tRealloc pRealloc;

#else
	void**** pGMalloc;
#endif

	CPythonInterface* Python;
	bool bPythonInitTried = false;

	int EngineVersion = -1;
	int ChangelistNumber = -1;

	const char* EngineBuild;

	tProcessEvent oProcessEvent = nullptr;
	tCallFunction oCallFunction = nullptr;

	std::map<std::string, std::string> ObjectMap = {};

	std::map<std::string, UClass*> ClassMap = {};

	CSigScan scanner = nullptr;

	void ProcessEvent(UObject* caller, UFunction* Function, void* Params, void* Result) {
#ifndef UE4
		pProcessEvent(caller, Function, Params, nullptr);
#else
		pProcessEvent(caller, Function, Params);
#endif
	}

#ifndef UE4
	void __fastcall hkProcessEvent(UObject* caller, DWORD dummy, UFunction* Function, void* Params, void* Result)
	{
		if (gInjectedCallNext)
		{
			gInjectedCallNext = false;
			oProcessEvent(caller, Function, Params, Result);
			return;
		}

		std::string functionName = Function->GetObjectName();
		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();

			LOG(HOOKS, "===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s", callerName.c_str(), functionName.c_str());
		}

		if (gHookManager->HasHook(caller, Function))
		{
			auto fParams = FStruct{ Function, Params };
			if (!gHookManager->ProcessHooks(functionName, caller, Function, &fParams)) {
				// The engine hook manager told us not to pass this function to the engine
				return;
			}
		}

		oProcessEvent(caller, Function, Params, Result);
	}
#else
	void __stdcall hkProcessEvent(UObject* caller, UFunction* Function, void* Params)
	{
		if (gInjectedCallNext)
		{
			gInjectedCallNext = false;
			oProcessEvent(caller, Function, Params);
			return;
		}

		std::string functionName = Function->GetObjectName();
		if (logAllCalls)
		{
			std::string callerName = caller->GetFullName();

			LOG(HOOKS, "===== ProcessEvent called =====\npCaller Name = %s\npFunction Name = %s", callerName.c_str(), functionName.c_str());
		}

		if (gHookManager->HasHook(caller, Function))
		{
			auto fParams = FStruct{ Function, Params };
			if (!gHookManager->ProcessHooks(functionName, caller, Function, &fParams)) {
				// The engine hook manager told us not to pass this function to the engine
				return;
			}
		}

		oProcessEvent(caller, Function, Params);
	}
#endif

	void LogOutParams(FFrame* Stack)
	{
		LOG(HOOKS, "Logging stack, %s, %s", Stack->Object->GetFullName().c_str(),
			Stack->Node->GetFullName().c_str());
		LOG(HOOKS, "0x%p", Stack->Node);
		LOG(HOOKS, "0x%p", Stack->Object);
		LOG(HOOKS, "0x%p", Stack->Code);
		LOG(HOOKS, "0x%p", Stack->Locals);
		LOG(HOOKS, "0x%p", Stack->PreviousFrame);
		LOG(HOOKS, "0x%p", Stack->Outparams);
		for (FOutParmRec* rec = Stack->Outparams; rec; rec = rec->NextOutParm)
		{
			LOG(HOOKS, "%s, 0x%x", rec->Property->GetFullName().c_str(), rec->PropAddr);
		}
	}

#ifdef UE4
	// __fastcall isn't used in x64 (only x86), thus EDX is a pointless parameter
	void hkCallFunction(UObject* caller, FFrame& Stack, void* const Result, UFunction* Function)
#else
	void __fastcall hkCallFunction(UObject* caller, void* edx, FFrame& Stack, void* const Result, UFunction* Function)
#endif
	{
		if (logAllCalls)
		{
			LOG(HOOKS, "CallFunction");
			std::string callerName = caller->GetFullName();
			std::string functionName = Function->GetFullName();

			// Prevent infinite recursion when printing to console
			if (functionName != "Function Engine.Console.OutputText" && functionName !=
				"Function Engine.Console.OutputTextLine")
				LOG(HOOKS, "===== CallFunction called =====\npCaller Name = %s\npFunction Name = %s",
					callerName.c_str(), functionName.c_str());
		}

		unsigned char* code = Stack.Code;

		if (!gHookManager->ProcessHooks(caller, Stack, Result, Function))
		{
			Stack.SkipFunction();
			return;
		}

		Stack.Code = code;
		oCallFunction(caller, Stack, Result, Function);
	}

#ifdef UE4
	// This function gets called whenever a UE4 console execs a console command..
	bool hkStaticExec(UWorld* world, const wchar_t* cmd, FOutputDevice& Ar) {
		if (wcsncmp(L"py ", cmd, 3) == 0) {
			auto z = Util::Narrow(cmd);
			const char* input = z.c_str();
			Python->AddToConsoleLog(gameConsole, input);
			LOG(CONSOLE, ">>> %s <<<", input);
			Python->DoString(input + 3);
			return true;
		}
		else if (wcsncmp(L"pyexec ", cmd, 7) == 0)
		{
			auto z = Util::Narrow(cmd);
			const char* input = z.c_str();
			Python->AddToConsoleLog(gameConsole, input);
			LOG(CONSOLE, ">>> %s <<<", input);
			UnrealSDK::Python->DoFile(input + 7);
			return true;
		}
		// Most UE4 games that get built don't actually have any of the `obj [...]` commands, this being the most useful version
		else if (wcsncmp(L"obj dump ", cmd, 9) == 0) {
			std::string objName = Util::Narrow(cmd).substr(9);
			UObject* objectToDump = UObject::FindObjectClassless(objName);
			if (objectToDump == nullptr) {
				LOG(CONSOLE, "Unable to find object of name: %s", objName.c_str());
				return true;
			}
			objectToDump->DumpObject();
			return true;
		}
		// When outside of the UE4 editor, there's no line wrapping in the console itself, and there's not an easy way to re-enable it,
		// So why not just write it out into a txt file
		else if (wcsncmp(L"flushlog", cmd, 8) == 0) {
			std::wofstream file;
			file.open("console.log");
			for (size_t i = 0; i < UnrealSDK::gameConsole->Scrollback.Count; i++) {
				FString str = UnrealSDK::gameConsole->Scrollback(i);
				file << str.AsString() << "\n";
			}
			return true;
		}
		else if (Python->ProcessCommands(cmd)) {
			return true;
		}

		return oStaticExec(world, cmd, Ar);
	}
#endif

	void DoInjectedCallNext()
	{
		gInjectedCallNext = true;
	}

	void LogAllCalls(const bool Enabled)
	{
		logAllCalls = Enabled;
	}

	void HookGame()
	{
		TCHAR szExePath[2048];

		// For some god forsaken reason, GetModuleFileName can sometimes just fail ???
		if (GetModuleFileName(NULL, szExePath, 2048) == 0) {
			LOG(ERROR, "WINAPI Error when finding exe name commands: %d\n", GetLastError());
			// Maybe we can try using another form of getting the module exe???
			// https://stackoverflow.com/questions/6924195/get-dll-path-at-runtime
			if (GetModuleFileName(GetModuleHandle(NULL), szExePath, 2048) == 0) {
				LOG(ERROR, "WINAPI Error #2 when finding exe name commands: %d\n", GetLastError());
				return;
			}
			// If we make it here, that means that the second check actually went through and worked ????
		}

		std::string str = Util::Narrow(std::wstring(szExePath));
		std::size_t slash = str.find_last_of("/\\") + 1;
		std::size_t dot = str.find_last_of('.');
		std::string exeName = str.substr(slash, dot - slash);
		LOG(MISC, "Found EXE name as '%s.exe'", exeName.c_str());

		ObjectMap = game_object_map[exeName];
		LOG(MISC, "Loaded object map");
		CSigScan sigscan(Util::Widen(exeName + ".exe").c_str());

		scanner = sigscan;

		LOG(MISC, "Loading Sigs...");
		Signatures::InitSignatures(exeName);
		LOG(MISC, "Sigs Loaded");

#ifdef UE4
			// UE4 has a different setup & patterns for the GNames / GObjects, they're now chunked up and not just a standard TArray<UObject*>*

			LOG(MISC, "Initializing UE4 SDK...");
			auto addy = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::GObjects.Sig, Signatures::GObjects.Mask);
			auto x = (FUObjectArray*)(addy + *(signed long*)(addy + 0x3) + 0x7);

			pGObjects = (void*)(&(x->ObjObjects));

			LOG(MISC, "[Internal] FUObjectArray = 0x%p", x);
			LOG(MISC, "[Internal] GObjects = 0x%p", x->ObjObjects.Objects);

			auto addy2 = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::GNames.Sig, Signatures::GNames.Mask);
			auto y = (*(FChunkedFNameEntryArray**)(addy2 + *(signed long*)(addy2 + 0xB) + 0xF));
			pGNames = (void***)(y);

			LOG(MISC, "[Internal] GNames = 0x%p", (void***)(y->Objects) );


			pFNameInit = reinterpret_cast<UE4FNameInit>(sigscan.Scan(Signatures::FNameInit));
			LOG(MISC, "[Internal] FindOrCreateFName = 0x%p", pFNameInit);

			auto addy3 = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::StaticConstructor.Sig, Signatures::StaticConstructor.Mask);
			auto z = (addy3 + *(signed long*)(addy3 + 0x1) + 5);
			pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(z);
			LOG(MISC, "[Internal] UObject::StaticConstructObject() = 0x%p", pStaticConstructObject);

			auto addy4 = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::StaticExec.Sig, Signatures::StaticExec.Mask);
			auto j = (addy4 + *(signed long*)(addy4 + 0x1) + 5);
			pStaticExec = reinterpret_cast<tStaticExec>(j);
			LOG(MISC, "[Internal] StaticExec() = 0x%p", pStaticExec);

			auto addy5 = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::GMalloc.Sig, Signatures::GMalloc.Mask);
			auto k = (addy5 + *(signed long*)(addy5 + 0x1) + 5);
			pGMalloc = reinterpret_cast<tMalloc>(k);
			LOG(MISC, "[Internal] FMemory::MallocExternal() = 0x%p", pGMalloc);

			auto addy6 = sigscan.FindPattern(GetModuleHandle(NULL), (unsigned char*)Signatures::Realloc.Sig, Signatures::Realloc.Mask);
			auto m = (addy6 + *(signed long*)(addy6 + 0x1) + 5);
			pRealloc = reinterpret_cast<tRealloc>(m);
			LOG(MISC, "[Internal] FMemory::Realloc() = 0x%p", pRealloc);
#else
		void*** tempGObjects = (void***)sigscan.Scan(Signatures::GObjects);
		if (tempGObjects != nullptr) {
			pGObjects = *tempGObjects;
			LOG(MISC, "[Internal] GObjects = 0x%p", pGObjects);
		}

		void*** tempGNames = (void***)sigscan.Scan(Signatures::GNames);
		if (tempGNames != nullptr) {
			pGNames = *tempGNames;
			LOG(MISC, "[Internal] GNames = 0x%p", pGNames);
		}

		pFNameInit = reinterpret_cast<tFNameInitOld>(sigscan.Scan(Signatures::FNameInit));
		LOG(MISC, "[Internal] FindOrCreateFName = 0x%p", pFNameInit);

		pStaticConstructObject = reinterpret_cast<tStaticConstructObject>(sigscan.Scan(Signatures::StaticConstructor));
		LOG(MISC, "[Internal] UObject::StaticConstructObject() = 0x%p", pStaticConstructObject);

		void* gm = sigscan.Scan(Signatures::GMalloc);
		if (gm != nullptr) {
			pGMalloc = *static_cast<void*****>(sigscan.Scan(Signatures::GMalloc));
			LOG(MISC, "[Internal] GMalloc = 0x%p", pGMalloc);
		}
		else
			pGMalloc = nullptr;
#endif

		pProcessEvent = reinterpret_cast<tProcessEvent>(sigscan.Scan(Signatures::ProcessEvent));
		LOG(MISC, "[Internal] UObject::ProcessEvent() = 0x%p", pProcessEvent);

		pCallFunction = reinterpret_cast<tCallFunction>(sigscan.Scan(Signatures::CallFunction));
		LOG(MISC, "[Internal] UObject::CallFunction() = 0x%p", pCallFunction);


		pFrameStep = reinterpret_cast<tFrameStep>(sigscan.Scan(Signatures::FrameStep));
		LOG(MISC, "[Internal] FFrame::Step() = 0x%p", pFrameStep);

		pGetDefaultObject = reinterpret_cast<tGetDefaultObject>(sigscan.Scan(Signatures::GetDefaultObject));
		LOG(MISC, "[Internal] GetDefaultObject = 0x%p", pGetDefaultObject);

		// TODO: Add these sigs
		// pLoadPackage = reinterpret_cast<tLoadPackage>(sigscan.Scan(Signatures::LoadPackage));
		// LOG(MISC, "[Internal] UObject::LoadPackage() = 0x%p", pLoadPackage);

		#ifndef UE4 // When generated properly, UE4 games don't actually have the SET command in them :(
			try
			{
				void* SetCommand = sigscan.Scan(Signatures::SetCommand);
				if (SetCommand == nullptr) {
					LOG(MISC, "Couldn't find set command signature, assuming already edited");
				} else {
					DWORD near out = 0;
					if (!VirtualProtectEx(GetCurrentProcess(), SetCommand, 5, 0x40, &out))
					{
						LOG(ERROR, "WINAPI Error when enabling 'SET' commands: %d", GetLastError());
					}
					else
					{
						static_cast<unsigned char*>(SetCommand)[5] = 0xFF;
					}
					LOG(MISC, "Enabled SET commands");
				}
			}
			catch (std::exception e)
			{
				LOG(ERROR, "Exception when enabling 'SET' commands: %d", e.what());
			}
		#endif

		LogAllCalls(false);

		MH_Initialize();

		if (pProcessEvent != nullptr) {
			// Detour UObject::ProcessEvent()
			MH_CreateHook((PVOID&)pProcessEvent, &hkProcessEvent, &(PVOID&)oProcessEvent);
			MH_EnableHook((PVOID&)pProcessEvent);
			LOG(MISC, "[Internal] Hooked ProcessEvent, Hook: 0x%p, Original: 0x%p", pProcessEvent, oProcessEvent);
		}

		if (pCallFunction != nullptr) {
			// Detour UObject::CallFunction()
			MH_CreateHook((PVOID&)pCallFunction, &hkCallFunction, &(PVOID&)oCallFunction);
			MH_EnableHook((PVOID&)pCallFunction);
			LOG(MISC, "[Internal] Hooked CallFunction, Hook: 0x%p, Original: 0x%p", pCallFunction, oCallFunction);
		}

		#ifdef UE4
		if (pStaticExec != nullptr) {
			// Detour StaticExec()
			MH_CreateHook((PVOID&)pStaticExec, &hkStaticExec, &(PVOID&)oStaticExec);
			MH_EnableHook((PVOID&)pStaticExec);
			LOG(MISC, "[Internal] Hooked StaticExec, Hook: 0x%p, Original: 0x%p", pStaticExec, oStaticExec);
		}
		#endif
	}

	void ReloadPython() {
		LOG(INFO, "Reloading python modules...");

		if (Python->ReloadState() == PythonStatus::PYTHON_MODULE_ERROR && Settings::DeveloperModeEnabled()) {
			Util::Popup(L"Python Module Error",
				L"An error occurred while reloading the Python modules.\n\nPlease check your console for the exact error. Once you've fixed the error, press F11 to reload the Python state.");
		}
	}

	void InitializePython()
	{
		Python = new CPythonInterface();
		bPythonInitTried = true;
		const PythonStatus status = Python->InitializeModules();
		if (status == PythonStatus::PYTHON_MODULE_ERROR && !Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
				L"A core Python module failed to load correctly, and the SDK cannot continue to run.\n\nThis may indicate that the game has been patched and the SDK needs updating.");
		}
		else if (status == PythonStatus::PYTHON_MODULE_ERROR && Settings::DeveloperModeEnabled())
		{
			Util::Popup(L"Python Module Error",
				L"An error occurred while loading the Python modules.\n\nPlease check your console for the exact error. Once you've fixed the error, press F11 to reload the Python state.");
		}
	}

	bool getCanvasPostRender(UObject* Caller, UFunction* Function, FStruct* Params)
	{

#ifndef UE4
		// Set console key to Tilde if not already set
		gameConsole = static_cast<UConsole *>(UObject::Find(ObjectMap["ConsoleObjectType"].c_str(), ObjectMap["ConsoleObjectName"].c_str()));
		auto eng = static_cast<UEngine*>(gEngine);

		if (gameConsole == nullptr && gEngine && static_cast<UEngine *>(gEngine)->GameViewport)
			gameConsole = eng->GameViewport->ViewportConsole;
		if (gameConsole && (gameConsole->ConsoleKey == FName("None") || gameConsole->ConsoleKey == FName("Undefine")))
			gameConsole->ConsoleKey = FName("Tilde");

#else
		auto consoleClass = static_cast<UConsole*>(UObject::Find(ObjectMap["ConsoleObjectType"].c_str(), ObjectMap["ConsoleObjectName"].c_str()));
		gameConsole = static_cast<UConsole*>(UnrealSDK::pStaticConstructObject(consoleClass->Class, consoleClass->Outer, FName(std::string("UConsole")), 0, 0, NULL, 0, NULL, 0));
		auto eng = static_cast<UEngine*>(gEngine);

		// In the event the gameConsole found through UObject::Find
		// This being set probably means that the console already exists but meh
		if (eng && gameConsole == nullptr && eng->GameViewport)  gameConsole = eng->GameViewport->ViewportConsole;

		// If our console wasn't initialized in the first place
		// Generally ViewportConsole will end up being nullptr if the game is built for shipping
		if (eng && eng->GameViewport && gameConsole) {
			gameConsole->ConsoleTargetPlayer = eng->GameViewport->World->OwningGameInstance->LocalPlayers(0);
			FName n = FName(std::string("Tilde"));

			// This is probably a costly call to do, but its also kinda the best option imo
			for (UObject* obj : UObject::FindAll( (char*)"Class /Script/Engine.InputSettings", false)) {
				UInputSettings* pc = static_cast<UInputSettings*>(obj);
				pc->ConsoleKey.KeyName = n;

				// This'll remove any extra ConsoleKeys that get set (generally via internal ini files or something)
				if(pc->ConsoleKeys.Count > 0) pc->ConsoleKeys.Count -= 1;
			}
			eng->GameViewport->ViewportConsole = gameConsole;
		}
#endif

		InitializePython();
		gHookManager->Remove(Function->GetObjectName(), "GetCanvas");
		return true;
	}

	void InitializeGameVersions()
	{
		#ifndef UE4
			EngineVersion = UObject::GetEngineVersion();
			ChangelistNumber = UObject::GetBuildChangelistNumber();
			LOG(MISC, "[Internal] Engine Version = %d, Build Changelist = %d", EngineVersion, ChangelistNumber);
		#else
			//! THIS MAGICALLY BROKE :)
			// EngineBuild = Util::Narrow(UKismetSystemLibrary::GetEngineVersion().AsString()).c_str();
			// UE4 doesn't really have a good version of "Changelist" its effectively just in Engine Version now
			// LOG(MISC, "[Internal] Engine Version: %s", EngineBuild);
		#endif

#ifndef UE4
		LOG(INFO, "======== UnrealEngine PythonSDK Loaded (Version %d) ========", UnrealSDK::EngineVersion);
#else
		LOG(INFO, "======== UnrealEngine PythonSDK Loaded (Version %s) ========", UnrealSDK::EngineBuild);
#endif
	}

	void GenerateDumpFiles() {
		LOG(INFO, "Dumping object/name data");
		std::ofstream file;
		file.open("SDKDumps.txt");
		for (size_t i = 0; i < UObject::GObjects()->Count; ++i) {
			UObject* obj = UObject::GObjects()->Get(i);
			if (obj && obj->Class) {
				file << obj->GetFullName() << std::endl;
			}
		}
		file.close();

		std::ofstream f;
		file.open("SDKNames.txt");
		for (size_t i = 0; i < FName::Names()->Count; ++i) {
			auto z = FName::Names()->Get(i);
			if (z == nullptr) continue;

			std::string output;
			if (z->IsWide())
				output.append(Util::Narrow(std::wstring(z->GetWideName())));
			else
				output.append(z->GetAnsiName());
			file << "[" << i << "]: " << output << std::endl;
		}
		LOG(INFO, "Object/name data dumped generated...");
	}

	// This function is used to ensure that everything gets called in the game thread once the game itself has loaded
	bool GameReady(UObject* Caller, UFunction* Function, FStruct* Params)
	{
		LOG(MISC, "[GameReady] Thread: %i", GetCurrentThreadId());

		// This should probably done a better way, but it doesn't sink in too much time
		remove("SDKDumps.txt");
		std::ofstream file;
		file.open("SDKDumps.txt", std::ios::app);

		for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
		{
			UObject* Object = UObject::GObjects()->Get(i);

			if (!Object || !Object->Class)
				continue;
			const char* cName = Object->Class->GetName();

			if (!strcmp(cName, "Class")) {
				// Technically this is just a bandaid solution, in reality UE4EngineClasses.h should've been generated better
				#ifndef UE4
				ClassMap[Object->GetName()] = static_cast<UClass*>(Object);
				#else
				ClassMap[Object->GetFullName()] = static_cast<UClass*>(Object);
				#endif
			}

			#ifdef UE4
			else if (strncmp(cName, "BlueprintGeneratedClass", 23) == 0) {
				ClassMap[Object->GetFullName()] = static_cast<UBlueprintGeneratedClass*>(Object);
			}
			#endif

			if (!strcmp(Object->GetFullName().c_str(), ObjectMap["EngineFullName"].c_str()))
				gEngine = Object;

			file << Object->GetFullName() << "\n";
		}


		file.flush();
		file.close();

		remove("SDKNames.txt");
		std::ofstream f;
		file.open("SDKNames.txt", std::ios::app);
		for (size_t i = 0; i < FName::Names()->Count; ++i) {
			auto z = FName::Names()->Get(i);
			if (z == nullptr) continue;

			std::string output;
			if (z->IsWide())
				output.append(Util::Narrow(std::wstring(z->GetWideName())));
			else
				output.append(z->GetAnsiName());
			file << "[" << i << "]: " << output << "\n";
		}
		f.flush();
		f.close();

		InitializeGameVersions();

		gHookManager->Remove(Function->GetObjectName(), "StartupSDK");
		gHookManager->Register(ObjectMap["PostRenderFunction"], "GetCanvas", getCanvasPostRender);

		return true;
	}

	void Initialize()
	{
		gHookManager = new CHookManager("EngineHooks");
		HookGame();

		gHookManager->Register(ObjectMap["StartupSDK"], "StartupSDK", GameReady);
	}

	// This is called when the process is closing
	// TODO: Other things might need cleaning up
	void Cleanup()
	{
		Logging::Cleanup();
		delete gHookManager;
		gHookManager = nullptr;
		Util::CloseGame();
	}

	void LoadPackage(const char* Filename, const DWORD Flags, const bool Force)
	{
		const std::wstring wideFilename = Util::Widen(Filename);
		UPackage* result = pLoadPackage(nullptr, wideFilename.c_str(), Flags);
		if (Force)
		{
			for (size_t i = 0; i < UObject::GObjects()->Count; ++i)
			{
				UObject* Object = UObject::GObjects()->Get(i);
				if (Object->GetPackageObject() == result)
					#ifdef UE4
					Object->ObjectFlags |= 0x4000;
					#else
					Object->ObjectFlags.A |= 0x4000;
					#endif
			}
		}
	};

	void KeepAlive(UObject* Obj)
	{
		for (UObject* outer = Obj; outer; outer = outer->Outer)
			#ifdef UE4
			outer->ObjectFlags |= 0x4000;
			#else
			outer->ObjectFlags.A |= 0x4000;
			#endif
	}

	#ifndef UE4
	UObject* ConstructObject(UClass* Class, UObject* Outer, const FName Name, const unsigned int SetFlags, unsigned int InternalSetFlags, UObject* Template, FOutputDevice* Error, void* InstanceGraph, int AssumeTemplateIsArchetype)
	{

		if (!Error)
		{
			Error = new FOutputDevice();
			/*
			WTF ??
			Error->VfTable = (void*)calloc(2, sizeof(void*));
			((void**)Error->VfTable)[1] = (void*)&Logging::LogW;
			*/
		}
		if (!Class)
			return nullptr;
		return pStaticConstructObject(Class, Outer, Name, SetFlags | 0b1, InternalSetFlags, Template, Error,
			InstanceGraph, AssumeTemplateIsArchetype);
	};
	#else
	UObject* ConstructObject(UClass* Class, UObject* InOuter, FName Name, unsigned int SetFlags, unsigned int InternalSetFlags, UObject* InTemplate, int CopyTransientsFromClassDefaults, void* InstanceGraph, int AssumeTemplateIsArchetype) {
		if (!Class) return nullptr;

		return pStaticConstructObject(Class, InOuter, Name, SetFlags | 0b1, InternalSetFlags, InTemplate, CopyTransientsFromClassDefaults, InstanceGraph, AssumeTemplateIsArchetype);
	};
	#endif


	UObject* GetEngine()
	{
		if (!gEngine) gEngine = UObject::Find(ObjectMap["EngineObjectType"].c_str(), ObjectMap["EngineObjectName"].c_str());
		return gEngine;
	}

	void RegisterHook(const std::string& FuncName, const std::string& HookName, const std::function<bool(UObject*, UFunction*, FStruct*)>& FuncHook)
	{
		gHookManager->Register(FuncName, HookName, FuncHook);
	}

	#ifdef UE4
	bool RegisterConsoleCommand(const std::string& Command, const std::function<bool(std::string&)>& FuncToCall)
	{
		return Python->RegisterConsoleCommand(Command, FuncToCall);
	}

	bool RemoveConsoleCommand(const std::string& Command)
	{
		return Python->RemoveConsoleCommand(Command);
	}
	#endif

	bool RemoveHook(const std::string& FuncName, const std::string& HookName)
	{
		return gHookManager->Remove(FuncName, HookName);
	}
}
