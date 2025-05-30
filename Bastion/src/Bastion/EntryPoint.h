#pragma once
#include "../Bastion.h"

#ifdef BS_PLATFORM_WINDOWS

extern Bastion::Game* Bastion::CreateGame();

void main(int argc, char** argv)
{
	auto game = Bastion::CreateGame();
	game->Run();
	delete game;
}

#endif
