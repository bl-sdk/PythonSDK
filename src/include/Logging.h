#pragma once

#ifndef LOGGING_H
#define LOGGING_H

#include <loguru.hpp>

namespace Logging
{
	enum SDKVerbosity : loguru::Verbosity {
		ERROR = loguru::Verbosity_ERROR,
		WARNING = loguru::Verbosity_WARNING,
		INFO = loguru::Verbosity_INFO,
		MAX = loguru::Verbosity_MAX,
		// Loguru lets us use 1-9 as extra debugging levels.
		// Deliberately only going to use even values so python can use the levels inbetween
		CONSOLE = 2,    // Catch all for messages in console - i.e. python stdout, user input
		MISC = 4,       // Catch all for misc info which we want to log, but only to the file
		HOOKS = 6,      // Messages about hooked functions
		INTERNAL = 8,   // Lowest level internal debug logging
	};

	void Initalize(void);
	void InitalizeExternal(void);
	void Cleanup(void);

	void SetConsoleVerbosity(SDKVerbosity verbosity);
	void SetFileVerbosity(SDKVerbosity verbosity);
}

// Can't use LOG_F with our custom levels, so a shortcut for most cases
#define LOG(verbosity, ...) VLOG_F(Logging::SDKVerbosity:: ## verbosity, __VA_ARGS__)

#endif
