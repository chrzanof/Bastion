#pragma once

#ifdef BS_PLATFORM_WINDOWS
	#ifdef BS_BUILD_DLL
		#define BASTION_API __declspec(dllexport)
	#else
		#define BASTION_API __declspec(dllimport)
	#endif
#else
#error Bastion only support Windows for now
#endif
