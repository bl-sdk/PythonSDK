#include "stdafx.h"
#include "Settings.h"
#include "Exceptions.h"
#include "Logging.h"

namespace Settings
{
	std::wstring binPath;
	bool developerMode;
	bool disableAntiDebug;
	bool enableMemoryDebug;

	void Initialize(wchar_t * binPath_/*LauncherStruct* args*/)
	{
		/*
		if (args == nullptr || args->BinPath == nullptr)
		{
			throw FatalSDKException(6000, "Launcher settings struct was invalid, did you use the launcher?");
		}
		*/

		binPath = binPath_; //args->BinPath;
		developerMode = true; //args->DeveloperMode;
		disableAntiDebug = true; // args->DisableAntiDebug;
		enableMemoryDebug = true; // args->EnableMemoryDebug;
	}

	std::wstring GetLogFilePath()
	{
		return GetBinFile(L"robeth-sdk.log");
	}

	std::wstring GetConfigFile()
	{
		return GetBinFile(L"robeth-sdk.cfg");
	}

	std::wstring GetBinFile(const std::wstring& filename)
	{
		std::wstring newPath;
		newPath = binPath + filename;
		return newPath;
	}

	std::wstring GetTextureFile(const std::wstring& filename)
	{
		std::wstring newPath;
		newPath = binPath + L"textures\\" + filename;
		return newPath;
	}

	std::wstring GetLuaFile(const std::wstring& filename)
	{
		std::wstring newPath;
		//wchar_t temppath[MAX_PATH + 1] = { 0 };
		newPath = binPath + L"..\\plugins\\" + filename;
		//PathCombine((LPWSTR)newPath.c_str(), temppath, nullptr);
		//return (std::wstring)temppath;
		return newPath;
	}

	std::wstring GetPythonFile(const std::wstring& filename)
	{
		std::wstring newPath;
		newPath = binPath + L"..\\plugins\\python\\" + filename;
		return newPath;
	}

	bool DeveloperModeEnabled()
	{
		return developerMode;
	}

	bool DisableAntiDebug()
	{
		return disableAntiDebug;
	}

	bool MemoryDebugEnabled()
	{
		return enableMemoryDebug;
	}
}