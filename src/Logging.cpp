#include "stdafx.h"

namespace Logging
{
	constexpr auto ENV_EXTERNAL_CONSOLE = "UNREALSDK_EXTERNAL_CONSOLE";
	constexpr auto ENV_CONSOLE_VERBOSITY = "UNREALSDK_CONSOLE_LOG_LEVEL";
	constexpr auto ENV_FILE_VERBOSITY = "UNREALSDK_FILE_LOG_LEVEL";

	constexpr auto LOG_EXECUTABLE_NAME = "UnrealSDK";
	constexpr auto LOG_FILE_NAME = "unrealsdk.log";

	constexpr auto CONSOLE_LOG_CALLBACK_NAME = "console";

	constexpr auto DEFAULT_FILE_VERBOSITY = SDKVerbosity::MISC;
	constexpr auto DEFAULT_CONSOLE_VERBOSITY = SDKVerbosity::CONSOLE;

	static HANDLE externalConsoleHandle = NULL;
	static loguru::Verbosity consoleVerbosity;

	static void LogToConsole(void* user_data, const loguru::Message& message);
	static const char* LogLevelToName(loguru::Verbosity verbosity);
	static loguru::Verbosity NameToLogLevel(const char* name);
	static loguru::Verbosity VerbosityFromEnv(const char* envvar);

	void Initalize(void)
	{
		loguru::g_preamble_uptime = false;
		loguru::g_stderr_verbosity = loguru::Verbosity_OFF;
		loguru::set_verbosity_to_name_callback(LogLevelToName);
		loguru::set_name_to_verbosity_callback(NameToLogLevel);

		consoleVerbosity = VerbosityFromEnv(ENV_CONSOLE_VERBOSITY);
		if (consoleVerbosity == loguru::Verbosity_INVALID) {
			consoleVerbosity = DEFAULT_CONSOLE_VERBOSITY;
		}

		auto fileVerbosity = VerbosityFromEnv(ENV_FILE_VERBOSITY);
		if (fileVerbosity == loguru::Verbosity_INVALID) {
			fileVerbosity = DEFAULT_FILE_VERBOSITY;
		}

		loguru::add_file(LOG_FILE_NAME, loguru::Truncate, fileVerbosity);

		// Take max verbosity and filter it in our callback instead
		loguru::add_callback(CONSOLE_LOG_CALLBACK_NAME, LogToConsole, nullptr, loguru::Verbosity_MAX);

		int fakeArgc = 1;
		char* fakeExeName = (char*)LOG_EXECUTABLE_NAME;
		char* fakeArgv[] = { fakeExeName, nullptr };

		loguru::Options options = {};
		options.verbosity_flag = nullptr;

		loguru::init(fakeArgc, fakeArgv, options);

#ifndef _DEBUG
		if (std::getenv(ENV_EXTERNAL_CONSOLE))
#endif
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

	static loguru::Verbosity NameToLogLevel(const char* name) {
		if (strcmp(name, "CON") == 0) {
			return SDKVerbosity::CONSOLE;
		} else if (strcmp(name, "MISC") == 0) {
			return SDKVerbosity::MISC;
		} else if (strcmp(name, "HOOK") == 0) {
			return SDKVerbosity::HOOKS;
		} else if (strcmp(name, "INT") == 0) {
			return SDKVerbosity::INTERNAL;
		} else {
			return loguru::Verbosity_INVALID;
		}
	}

	static loguru::Verbosity VerbosityFromEnv(const char* envvar) {
		auto envVerbosity = std::getenv(envvar);
		if (envVerbosity == nullptr) {
			return loguru::Verbosity_INVALID;
		}

		auto verbosity = loguru::get_verbosity_from_name(envVerbosity);
		if (verbosity != loguru::Verbosity_INVALID) {
			return verbosity;
		}

		std::string envString = envVerbosity;
		int envNum;
		auto res = std::from_chars(envString.data(), envString.data() + envString.size(), envNum);
		if (res.ec == std::errc() && SDKVerbosity::MIN <= envNum && envNum <= SDKVerbosity::MAX) {
			return envNum;
		}

		return loguru::Verbosity_INVALID;
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

#ifdef UE3
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
				FString msg(wideMessage.c_str());
				UnrealSDK::gameConsole->GetProperty<UFunction>("OutputText").Call<void, UStrProperty>(&msg);
			}
		}
#endif
	}
}
