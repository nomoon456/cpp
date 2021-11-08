#include "Weapon.hpp"

Weapon::Weapon() 
{
    //setType(weap);
}

Weapon::Weapon(const std::string &ref)
{
    _ref = ref;
}

Weapon::~Weapon(void)
{
    std::cout << "Weapon destructor Called" << std::endl;
}

void    Weapon::setType(const std::string &str)
{
   _ref = str;
}

const std::string &Weapon::getType(void) const
{
    return _ref;
}