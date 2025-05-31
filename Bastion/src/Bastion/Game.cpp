#include "Game.h"
#include "Logger.h"
#include <spdlog/spdlog.h>

namespace Bastion
{
	Game::Game() = default;

	Game::~Game() = default;

	void Game::Run()
	{
		if(!Init())
		{
			return;
		}
		while (true)
		{
			
		}
	}

	bool Game::Init()
	{
		if (!Logger::Init()) return false;
		BS_CORE_INFO("Initialized Core Console!");
		BS_INFO("Initialized Core Console!");
		return true;
	}
}

