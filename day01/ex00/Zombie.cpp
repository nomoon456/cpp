#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
}

void Zombie::Announce(void)
{
	std::cout << "I'm " << this->name << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->name << " is destroyed" << std::endl;
}