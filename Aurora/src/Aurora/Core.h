#pragma once

#ifdef AU_PLATFORM_WINDOWS
	#ifdef AU_BUILD_DLL
		#define AURORA_API _declspec(dllexport)
	#else
		#define AURORA_API _declspec(dllimport)
	#endif // AU_BUILD_DLL
#else
	#error Aurora only supports Windows!
#endif // AU_PLATFORM_WINDOWS