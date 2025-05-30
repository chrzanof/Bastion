#pragma once

#include "Core.h"

namespace Bastion
{
	class BASTION_API Game
	{
	public:
		Game();

		virtual ~Game();

		void Run();
	};

	Game* CreateGame();
}


