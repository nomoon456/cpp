#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;

	zombie = newZombie("Jean");
	randomChump("Michel");
	zombie->Announce();
	delete zombie;
}
