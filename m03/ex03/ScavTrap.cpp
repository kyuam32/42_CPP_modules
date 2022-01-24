
#include "ScavTrap.h"

ScavTrap::ScavTrap(): ClapTrap()
{
	hp = 100;
	mp = 50;
	ad = 20;
	std::cout << "Default constructor ScavTrap <" YEL << name << NC "> created" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	hp = 100;
	mp = 50;
	ad = 20;
	std::cout << "With argument constructor ScavTrap <" YEL << name << NC "> created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ref) : ClapTrap(ref)
{
	hp = 100;
	mp = 50;
	ad = 20;
	std::cout << "Copy constructor ScavTrap <" YEL << name << NC "> created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap <" << YEL << name << NC << "> terminated" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &ref)
{
	name = ref.name;
	hp = ref.hp;
	mp = ref.mp;
	ad = ref.ad;
	std::cout << "Operator assign ScavTrap <" << YEL << name << NC << "> called" << std::endl;
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap <" << YEL << name << NC << "> have enterred in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap <" << YEL << name << NC << "> attack <" << target << ">, ";
	std::cout << "causing " << RED << ad << NC << " points of damage!" << std::endl;
}