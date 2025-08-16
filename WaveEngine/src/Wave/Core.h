#pragma once

#ifdef WV_PLATFORM_WINDOWS
	#ifdef WV_BUILD_DLL
		#define WAVE_API __declspec(dllexport)
	#else
		#define WAVE_API __declspec(dllimport)
	#endif
#else 
	#error Wave is for Windows only!
#endif