#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void)
{
	Zombie *zombie = zombieHorde(5, "jean");
	if (zombie == NULL)
		return (0);
	for (int i = 0; i < 5; i++)
		zombie[i].Announce();
	delete [] zombie;
}
