
#ifndef INC_11_CPP_MODULE_FRAGTRAP_H
#define INC_11_CPP_MODULE_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &ref);
	~FragTrap();

	FragTrap &operator=(const FragTrap &ref);

	void highFivesGuys(void);
	void attack(std::string const &target);
};


#endif //INC_11_CPP_MODULE_FRAGTRAP_H
