#include "stdafx.h"
#include "Util.h"
#include "Settings.h"
#include "Logging.h"

wchar_t exeBaseFolder[FILENAME_MAX];
int DLLcount = 0;

// Sets exeBaseFolder to hold current executable's path, including "\"
void SetExecutableFolder()
{
	GetModuleFileName(nullptr, exeBaseFolder, FILENAME_MAX);
	int x = sizeof(exeBaseFolder) - 1;
	while (exeBaseFolder[x] != '\\')
		x--;
	exeBaseFolder[x + 1] = '\0';
}

DWORD WINAPI Start(LPVOID lpParam)
{
	std::wcout << std::endl;

	SetExecutableFolder();
	Settings::Initialize(exeBaseFolder);
	Logging::InitializeFile(Settings::GetLogFilePath());

	Logging::LogF("======= Unreal Engine Python Loader =======\n");
	try {
		UnrealSDK::Initialize();
	}
	catch (const std::runtime_error& re)
	{
		// speciffic handling for runtime_error
		Logging::LogF("Runtime error: %s", re.what());
	}
	catch (const std::exception& ex)
	{
		// speciffic handling for all exceptions extending std::exception, except
		// std::runtime_error which is handled explicitly
		Logging::LogF("Error occurred: %s", ex.what());
	}
	catch (...)
	{
		// catch any other errors (that we have no information about)
		Logging::LogF("Unknown failure occurred. Possible memory corruption");
	}
	

	return 0;
}

DWORD WINAPI ListenForReload(LPVOID lpParam) {
	while (!UnrealSDK::bPythonInitTried) { }
#ifdef _DEBUG
	while (true) {

		if((GetKeyState(VK_NUMPAD0) & 0x80)) {
			UnrealSDK::ReloadPython();
			while ((GetKeyState(VK_NUMPAD0) & 0x80)) { }
		}
		else if (GetKeyState(VK_NUMPAD7) & 0x80) {
			UnrealSDK::GenerateDumpFiles();
			while ((GetKeyState(VK_NUMPAD7) & 0x80)) { }
		}

	}
#endif
	return 0;
}

extern "C" BOOL APIENTRY DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hInst);

		DWORD dwThreadId, dwThrdParam = 1;
		HANDLE hThread;

		DWORD dwIThreadId, dwThrdParam2 = 2;
		HANDLE hInputThread;

		hThread = CreateThread(nullptr, 0, Start, &dwThrdParam, 0, &dwThreadId);
		hInputThread = CreateThread(nullptr, 0, ListenForReload, &dwIThreadId, 0, &dwThrdParam2);

	}
	if (reason == DLL_PROCESS_DETACH)
	{
		UnrealSDK::Cleanup();
	}

	return 1;
}
