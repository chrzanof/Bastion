#include "Logger.h"
#include <iostream>

namespace Bastion
{
	std::shared_ptr<spdlog::logger> Logger::s_CoreConsole;
	std::shared_ptr<spdlog::logger> Logger::s_ClientConsole;

	bool Logger::Init()
	{
		try
		{
			s_CoreConsole = spdlog::stdout_color_mt("Bastion");
			s_CoreConsole->set_level(spdlog::level::trace);
			s_CoreConsole->set_pattern("%^[%H:%M:%S.%e] [%l] %n: %v%$");

			s_ClientConsole = spdlog::stdout_color_mt("Game");
			s_ClientConsole->set_level(spdlog::level::trace);
			s_ClientConsole->set_pattern("%^[%H:%M:%S.%e] [%l] %n: %v%$");

			return true;
		}
		catch (const spdlog::spdlog_ex& ex)
		{
			std::cerr << "Logger initialization failed: " << ex.what() << std::endl;
			return false;
		}
		
	}
}
