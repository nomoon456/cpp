#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie = zombieHorde(5, "jean");
	zombie->Announce();
	delete [] zombie;
}
