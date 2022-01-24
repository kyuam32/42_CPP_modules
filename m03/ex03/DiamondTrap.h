
#ifndef INC_11_CPP_MODULE_DIAMONDTRAP_H
#define INC_11_CPP_MODULE_DIAMONDTRAP_H

#include "FragTrap.h"
#include "ScavTrap.h"

class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();

	DiamondTrap(const std::string &name);
	DiamondTrap(DiamondTrap )
	~DiamondTrap();
	using ScavTrap::attack;

//	DiamondTrap(const std::string name);
};


#endif //INC_11_CPP_MODULE_DIAMONDTRAP_H
