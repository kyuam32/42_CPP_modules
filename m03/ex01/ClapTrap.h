
#ifndef INC_11_CPP_MODULE_CLAPTRAP_H
#define INC_11_CPP_MODULE_CLAPTRAP_H

#include <iostream>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

class ClapTrap
{
protected:
	std::string name;
	int hp;
	int mp;
	int ad;

public:
	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &ref);
	~ClapTrap();

	ClapTrap &operator=(const ClapTrap &ref);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void showStat();
};


#endif //INC_11_CPP_MODULE_CLAPTRAP_H
