
#ifndef INC_11_CPP_MODULE_HUMANA_H
#define INC_11_CPP_MODULE_HUMANA_H

#include "Weapon.h"

class HumanA
{
private:
	std::string name;
	Weapon &held;
public:
	HumanA(const std::string &name, Weapon &held);
	~HumanA();

	void attack();
};


#endif //INC_11_CPP_MODULE_HUMANA_H
