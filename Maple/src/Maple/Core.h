#pragma once

#ifdef MP_PLATFORM_WINDOWS
	#ifdef MP_BUILD_DLL
		#define MAPLE_API _declspec(dllexport)
	#else
		#define MAPLE_API _declspec(dllimport)
	#endif // MP_BUILD_DLL
#else
	#error MAPLE ONLY SUPPORTS WINDOWS
#endif

// It checks condition x -> logs it and then debug break!
#ifdef MP_ENABLE_ASSERTS
	#define MP_ASSERT(x, ...) { if(!(x)) {	MP_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define MP_CORE_ASSERT(x, ...) { if(!(x)) { MP_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define MP_ASSERT(x, ...)
	#define MP_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)