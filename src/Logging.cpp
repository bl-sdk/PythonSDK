#include "stdafx.h"

namespace Logging
{
	constexpr auto LOG_EXECUTABLE_NAME = "UnrealSDK";
	constexpr auto LOG_FILE_NAME = "unrealsdk.log";

	constexpr auto CONSOLE_LOG_CALLBACK_NAME = "console";

	constexpr auto DEFAULT_FILE_VERBOSITY = SDKVerbosity::MISC;

	static HANDLE externalConsoleHandle = NULL;
	static auto consoleVerbosity = SDKVerbosity::CONSOLE;

	static void LogToConsole(void* user_data, const loguru::Message& message);
	static const char* LogLevelToName(loguru::Verbosity verbosity);

	void Initalize(void)
	{
		loguru::g_preamble_uptime = false;
		loguru::g_stderr_verbosity = loguru::Verbosity_OFF;
		loguru::set_verbosity_to_name_callback(LogLevelToName);

		loguru::add_file(LOG_FILE_NAME, loguru::Truncate, DEFAULT_FILE_VERBOSITY);

		// Take max verbosity and filter it in our callback instead
		loguru::add_callback(CONSOLE_LOG_CALLBACK_NAME, LogToConsole, nullptr, loguru::Verbosity_MAX);

		int fakeArgc = 1;
		char* fakeExeName = (char*)LOG_EXECUTABLE_NAME;
		char* fakeArgv[] = { fakeExeName, nullptr };

		loguru::Options options = {};
		options.verbosity_flag = nullptr;

		loguru::init(fakeArgc, fakeArgv, options);
	}

	void InitalizeExternal(void)
	{
		if (AllocConsole()) {
			externalConsoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
			if (!externalConsoleHandle) {
				LOG(ERROR, "Failed to get handle to external console!");
			}
		} else {
			LOG(ERROR, "Failed to initalize external console!");
		}
	}

	void Cleanup(void)
	{
		loguru::shutdown();
		if (externalConsoleHandle) {
			CloseHandle(externalConsoleHandle);
			externalConsoleHandle = NULL;
		}
	}

	void SetConsoleVerbosity(SDKVerbosity level) {
		consoleVerbosity = level;
	}

	void SetFileVerbosity(SDKVerbosity level) {
		loguru::remove_callback(LOG_FILE_NAME);
		loguru::add_file(LOG_FILE_NAME, loguru::Append, level);
	}

	static const char* LogLevelToName(loguru::Verbosity verbosity)
	{
		switch (verbosity) {
		    case SDKVerbosity::CONSOLE:
				return "CON";
			case SDKVerbosity::MISC:
				return "MISC";
			case SDKVerbosity::HOOKS:
				return "HOOK";
			case SDKVerbosity::INTERNAL:
				return "INT";
			default:
				return nullptr;
		}
	}

	static void LogToConsole(void* user_data, const loguru::Message& message)
	{
		if (message.verbosity > consoleVerbosity) {
			return;
		}

		if (externalConsoleHandle) {
			std::string fullMessage = message.preamble;
			fullMessage += message.indentation;
			fullMessage += message.prefix;
			fullMessage += message.message;
			fullMessage += "\n";
			WriteFile(externalConsoleHandle, fullMessage.c_str(), fullMessage.size(), nullptr, nullptr);
		}

		if (UnrealSDK::gameConsole)
		{
			std::string shortenedMessage = message.prefix;
			shortenedMessage += message.message;
			shortenedMessage += "\n";
			std::wstring wideMessage = Util::Widen(shortenedMessage);

			// It seems that Unreal will automatically put a newline on the end of a
			// console output, but if there's already a \n at the end, then it won't
			// add this \n onto the end. So if we're printing just a \n by itself,
			// just don't do anything.
			if (wideMessage.size() > 1)
			{
#ifdef UE4
				if (UnrealSDK::gameConsole->Scrollback.Data != NULL) {
					UnrealSDK::gameConsole->OutputTextCpp((wchar_t*)wideMessage.c_str());
				}
#else
				UnrealSDK::gameConsole->OutputText(FString(wideMessage.c_str()));
#endif
			}
		}
	}
}
