#include <Bastion.h>

class SandboxGame : public Bastion::Game
{
public:
	SandboxGame()
	{
		
	}
	~SandboxGame()
	{
		
	}
};

Bastion::Game* Bastion::CreateGame()
{
	return new SandboxGame();
}