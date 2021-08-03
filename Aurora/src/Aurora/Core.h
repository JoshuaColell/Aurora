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

#ifdef AU_ENABLE_ASSERTS
	#define AU_ASSERT(x, ...) { if(!(x)) { AU_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define AU_CORE_ASSERT(x, ...) { if(!(x)) { AU_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define AU_ASSERT(x, ...)
	#define AU_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)