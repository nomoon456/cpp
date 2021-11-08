//
// Created by moboustt on 1/8/2021.
//

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
public:

	explicit DiamondTrap(std::string const &name);
	DiamondTrap(DiamondTrap const &other);
	DiamondTrap &operator=(DiamondTrap & other);
	virtual ~DiamondTrap();

	friend std::ostream &operator<<(std::ostream &out, DiamondTrap const & diamondTrap);

	void    attack(std::string const & target);
	friend void swap(DiamondTrap& first, DiamondTrap &second);

	void whoAmI();

private:

	DiamondTrap();
	std::string _name;
};


#endif //__DIAMONDTRAP_H__
