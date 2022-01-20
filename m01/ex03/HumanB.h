
#ifndef INC_11_CPP_MODULE_HUMANB_H
#define INC_11_CPP_MODULE_HUMANB_H

#include "Weapon.h"

class HumanB
{
private:
	std::string name;
	Weapon *held;
	HumanB();
public:
	HumanB(const std::string &name, Weapon &held);
	HumanB(const std::string &name);
	~HumanB();

	void setWeapon(Weapon &type);
	void attack();
};


#endif //INC_11_CPP_MODULE_HUMANB_H
