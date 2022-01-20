
#include "Weapon.h"

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
	std::cout << RED + this->type + NC << " destroyed" << std::endl;
}

const std::string &Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
	std::cout << RED + this->type + NC << " has set" << std::endl;
}

Weapon::Weapon(const std::string &type)
{
	this->type = type;
	std::cout << "Weapon created" << std::endl;
	std::cout << RED + this->type + NC << " has set" << std::endl;
}

