
#include "FragTrap.h"

FragTrap::FragTrap() : ClapTrap()
{
	hp = 100;
	mp = 100;
	ad = 30;
	std::cout << "Default constructor FragTrap <" YEL << name << NC "> created" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	hp = 100;
	mp = 100;
	ad = 30;
	std::cout << "With argument constructor FragTrap <" YEL << name << NC "> created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ref)
{
	hp = ref.hp;
	mp = ref.mp;
	ad = ref.ad;
	std::cout << "Copy constructor FragTrap <" YEL << name << NC "> created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap <" << YEL << name << NC << "> terminated" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &ref)
{
	ClapTrap::operator=(ref);
	std::cout << "Operator assign FragTrap <" << YEL << name << NC << "> called" << std::endl;
	return *this;
}

void FragTrap::highFivesGuys()
{
	std::cout << "FragTrap requests positive high fives" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "FragTrap <" << YEL << name << NC << "> attack <" << target << ">, ";
	std::cout << "causing " << RED << ad << NC << " points of damage!" << std::endl;
}