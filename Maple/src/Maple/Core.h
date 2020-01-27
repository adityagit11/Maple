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