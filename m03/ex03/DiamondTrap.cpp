
#include "DiamondTrap.h"

DiamondTrap::DiamondTrap(): ClapTrap("Default_clap_name")
{
	this->name = "default";
	mp = 50;
	std::cout << "Default constructor DiamondTrap <" YEL << name << NC "> created" << std::endl;
}


DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap <" << YEL << name << NC << "> terminated" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name)
{
	mp = 50;
	std::cout << "With argument constructor DiamondTrap <" YEL << name << NC "> created" << std::endl;
}


