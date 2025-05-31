#include "Game.h"
#include "Logger.h"
#include <spdlog/spdlog.h>

namespace Bastion
{
	Game::Game()
	{

	}

	Game::~Game()
	{

	}

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

		return true;
	}
}

