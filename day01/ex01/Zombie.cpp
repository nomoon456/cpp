#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "Constructor called." << std::endl;
}

Zombie::Zombie(std::string name): _name(name) {}

void Zombie::Announce(void)
{
	std::cout << _name << "Brainnnzzzzzzz.." << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << _name << " is gone" << std::endl;
}