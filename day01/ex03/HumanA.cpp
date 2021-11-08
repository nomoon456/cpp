#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{

}

HumanA::~HumanA(void)
{
    std::cout << "HumanA destructor called." << std::endl;
}

void    HumanA::attack(void)
{
    std::cout << _name << " attack with " << _weapon.getType() << std::endl;
}