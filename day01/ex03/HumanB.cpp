#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{
    std::cout << "HumanB destructor called." << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    _weapon = &weapon;
}

void    HumanB::attack(void)
{
    std::cout << _name << " attack with " << _weapon->getType() << std::endl;
}