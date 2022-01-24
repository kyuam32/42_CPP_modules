
#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hp(10), mp(10), ad(0)
{
	std::cout << "With argument constructor ClapTrap <" YEL << this->name << NC "> created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ref) : name(ref.name), hp(ref.hp), mp(ref.mp), ad(ref.ad)
{
	std::cout << "Copy constructor ClapTrap <" << YEL << this->name << NC << "> created" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap <" << YEL << this->name << NC << "> terminated" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap <" << YEL << this->name << NC << "> attack <" << target << ">, ";
	std::cout << "causing " << RED << this->ad << NC << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hp -= amount;
	std::cout << "ClapTrap <" << YEL << this->name << NC << "> takes "<< RED << amount << NC<< " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hp += amount;
	std::cout << "ClapTrap <" << YEL << this->name << NC << "> repaired "<< GRN << amount << NC<< " damage" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &ref)
{
	name = ref.name;
	hp = ref.hp;
	mp = ref.mp;
	ad = ref.ad;
	std::cout << "Operator ClapTrap <" << YEL << this->name << NC << "> called" << std::endl;
	return *this;
}

