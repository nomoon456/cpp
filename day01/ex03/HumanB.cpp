#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB(void)
{

}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

//NAME attacks with his WEAPON_TYPE
void    HumanB::attack(void)
{
    std::cout << _name << "attack with " << this->_weapon << std::endl;
}