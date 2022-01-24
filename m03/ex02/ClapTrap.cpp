
#include "ScavTrap.h"

ClapTrap::ClapTrap() :  name("Default"), hp(10), mp(10), ad(0)
{
	std::cout << "Default constructor ClapTrap <" YEL << name << NC "> created" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), mp(10), ad(0)
{
	std::cout << "With argument constructor ClapTrap <" YEL << name << NC "> created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) : name(ref.name), hp(ref.hp), mp(ref.mp), ad(ref.ad)
{
	std::cout << "Copy constructor ClapTrap <" << YEL << name << NC << "> created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << YEL << name << NC << "> terminated" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap <" << YEL << name << NC << "> attack <" << YEL << target << NC << ">, ";
	std::cout << "causing " << RED << ad << NC << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	hp -= amount;
	std::cout << "ClapTrap <" << YEL << name << NC << "> takes "<< RED << amount << NC<< " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	std::cout << "ClapTrap <" << YEL << name << NC << "> repaired "<< GRN << amount << NC<< " damage" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	name = ref.name;
	hp = ref.hp;
	mp = ref.mp;
	ad = ref.ad;
	std::cout << "Operator assign ClapTrap <" << YEL << name << NC << "> called" << std::endl;
	return *this;
}

void ClapTrap::showStat()
{
	std::cout << "name : " << YEL << name << NC <<std::endl;
	std::cout << "hp   : " << GRN << hp << NC <<std::endl;
	std::cout << "mp   : " << BLU << mp << NC <<std::endl;
	std::cout << "ad   : " << RED << ad << NC <<std::endl;
	std::cout <<std::endl;
}

