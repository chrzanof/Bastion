#pragma once
#include <memory>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>

#include "Core.h"

namespace Bastion
{
	class BASTION_API Logger
	{
	private:
		static std::shared_ptr<spdlog::logger> s_CoreConsole;
		static std::shared_ptr<spdlog::logger> s_ClientConsole;

	public:

		static bool Init();

		inline static std::shared_ptr<spdlog::logger> getCoreConsole() { return s_CoreConsole; }
		inline static std::shared_ptr<spdlog::logger> getClientConsole() { return s_ClientConsole; }

		enum class level : uint8_t
		{
			trace,
			debug,
			info,
			warn,
			error,
			critical,
			off,
			n_levels,

		};
		inline static void SetCoreLevel(level level) { s_CoreConsole->set_level(static_cast<spdlog::level::level_enum>(level)); }
		inline static void SetClientLevel(level level) { s_ClientConsole->set_level(static_cast<spdlog::level::level_enum>(level)); }

	};
}

#define BS_CORE_TRACE(...)		::Bastion::Logger::getCoreConsole()->trace(__VA_ARGS__)
#define BS_CORE_DEBUG(...)		::Bastion::Logger::getCoreConsole()->debug(__VA_ARGS__)
#define BS_CORE_INFO(...)		::Bastion::Logger::getCoreConsole()->info(__VA_ARGS__)
#define BS_CORE_WARN(...)		::Bastion::Logger::getCoreConsole()->warn(__VA_ARGS__)
#define BS_CORE_ERROR(...)		::Bastion::Logger::getCoreConsole()->error(__VA_ARGS__)
#define BS_CORE_CRITICAL(...)	::Bastion::Logger::getCoreConsole()->critical(__VA_ARGS__)
								
#define BS_TRACE(...)			::Bastion::Logger::getClientConsole()->trace(__VA_ARGS__)
#define BS_DEBUG(...)			::Bastion::Logger::getClientConsole()->debug(__VA_ARGS__)
#define BS_INFO(...)			::Bastion::Logger::getClientConsole()->info(__VA_ARGS__)
#define BS_WARN(...)			::Bastion::Logger::getClientConsole()->warn(__VA_ARGS__)
#define BS_ERROR(...)			::Bastion::Logger::getClientConsole()->error(__VA_ARGS__)
#define BS_CRITICAL(...)		::Bastion::Logger::getClientConsole()->critical(__VA_ARGS__)


