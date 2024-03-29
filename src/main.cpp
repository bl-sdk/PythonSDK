#include "stdafx.h"
#include "detours/detours.h"
#include "UnrealSdk.h"
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

void LoadPlugins(const wchar_t* folder)
{
	WIN32_FIND_DATA fd;
	wchar_t targetfilter[FILENAME_MAX];
	wchar_t currfile[FILENAME_MAX];
	wcscpy_s(targetfilter, exeBaseFolder);
	wcscat_s(targetfilter, folder);
	PathCombine(targetfilter, targetfilter, nullptr);
	if (CreateDirectory(targetfilter, nullptr) || ERROR_ALREADY_EXISTS == GetLastError())
	{
		//success
	}
	else
	{
		Logging::LogF("Failed to create plugins folder");
	}
	wcscat_s(targetfilter, L"\\*.dll");
	PathCombine(targetfilter, targetfilter, nullptr);
	const HANDLE dllFile = FindFirstFile(targetfilter, &fd);
	if (dllFile == INVALID_HANDLE_VALUE)
	{
		return;
	}
	do
	{
		if (!(fd.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
		{
			wcscpy_s(currfile, exeBaseFolder);
			wcscat_s(currfile, folder);
			wcscat_s(currfile, L"\\");
			wcscat_s(currfile, fd.cFileName);
			PathCombine(currfile, currfile, nullptr);

			if (PathMatchSpec(_wcslwr(currfile), L"*.dll"))
			{
				if (LoadLibrary(currfile))
				{
					Logging::LogF("Plugin loaded: %s\n", currfile);
					DLLcount++;
				}
				else
				{
					Logging::LogF("Plugin error: %s\n", currfile);
					MessageBox(nullptr, currfile, TEXT("Error"), MB_OK);
				}
			}
			else
			{
				MessageBox(nullptr, TEXT("Failed to load plugin"), currfile, MB_OK);
			}
		}
	}
	while (FindNextFile(dllFile, &fd));
	FindClose(dllFile);
}

DWORD WINAPI Start(LPVOID lpParam)
{
	SetExecutableFolder();
	Settings::Initialize(exeBaseFolder);
	Logging::InitializeFile(Settings::GetLogFilePath());
#ifdef _DEBUG
	Logging::InitializeExtern();
#endif

	Logging::LogF("======= Borderlands 2 Python Loader =======\n");
	UnrealSDK::Initialize();
	LoadPlugins(L".\\Plugins");

	return 0;
}

extern "C" BOOL WINAPI DllMain(HINSTANCE hInst, DWORD reason, LPVOID)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hInst);

		DetourRestoreAfterWith();
		DetourUpdateThread(GetCurrentThread());

		DWORD dwThreadId, dwThrdParam = 1;
		HANDLE hThread;
		hThread = CreateThread(nullptr, 0, Start, &dwThrdParam, 0, &dwThreadId);
	}
	if (reason == DLL_PROCESS_DETACH)
	{
		UnrealSDK::Cleanup();
	}

	return 1;
}
