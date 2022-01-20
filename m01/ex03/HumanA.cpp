
#include "HumanA.h"


HumanA::HumanA(const std::string &name, Weapon &held) : name(name), held(held)
{
	std::cout << GRN + HumanA::name + NC << " has born with " << RED + this->held.getType() + NC << std::endl;
}


HumanA::~HumanA()
{
	std::cout << GRN + HumanA::name + NC << " gone" << std::endl;
}

void HumanA::attack()
{
	std::cout << GRN + HumanA::name + NC << " attacks with his " <<RED + this->held.getType() + NC << std::endl;
}

