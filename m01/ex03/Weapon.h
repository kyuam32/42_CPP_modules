
#ifndef INC_11_CPP_MODULE_WEAPON_H
#define INC_11_CPP_MODULE_WEAPON_H

#include <iostream>
#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"

class Weapon
{
private:
	std::string type;
	Weapon();
public:
	Weapon(const std::string &type);
	~Weapon();
	const std::string &getType() const;
	void setType(const std::string &type);

};


#endif //INC_11_CPP_MODULE_WEAPON_H
