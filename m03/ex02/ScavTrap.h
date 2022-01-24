
#ifndef INC_11_CPP_MODULE_SCAVTRAP_H
#define INC_11_CPP_MODULE_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &ref);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &ref);

	void guardGate();
	void attack(std::string const &target);
};


#endif //INC_11_CPP_MODULE_SCAVTRAP_H
