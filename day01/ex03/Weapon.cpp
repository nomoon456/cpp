#include "Weapon.hpp"

Weapon::Weapon(std::string weap) 
{
    setType(weap);
}

Weapon::~Weapon(void)
{
    std::cout << "Destructor Called" << std::endl;
}

void    Weapon::setType(std::string str)
{
    this->_ref = str;
}

std::string Weapon::getType(void) const
{
    return this->_ref;
}