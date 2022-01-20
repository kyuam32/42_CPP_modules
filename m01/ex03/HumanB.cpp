
#include "HumanB.h"

HumanB::HumanB()
{
}

HumanB::HumanB(const std::string &name) : name(name), held(NULL)
{
	std::cout << GRN + HumanB::name + NC << " has born with " << RED "NOTHING" NC << std::endl;
}

HumanB::HumanB(const std::string &name, Weapon &held) : name(name), held(&held)
{
	std::cout << GRN + HumanB::name + NC << " has born with " << RED + this->held->getType() + NC << std::endl;
}


HumanB::~HumanB()
{
	std::cout << GRN + HumanB::name + NC << " gone" << std::endl;
}

void HumanB::attack()
{
	if (this->held)
		std::cout << GRN + HumanB::name + NC << " attacks with his " <<RED + HumanB::held->getType() + NC << std::endl;
	else
		std::cout << GRN + HumanB::name + NC << " attacks with his " <<RED "FIST" NC << std::endl;
}

void HumanB::setWeapon(Weapon &type)
{
	this->held = &type;
	std::cout << GRN + HumanB::name + NC << " Picked up " <<RED + this->held->getType() + NC << std::endl;
}

