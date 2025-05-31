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

	private:
		bool Init();
	};

	Game* CreateGame();
}


