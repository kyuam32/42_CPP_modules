
#ifndef INC_11_CPP_MODULE_ZOMBIE_H
#define INC_11_CPP_MODULE_ZOMBIE_H

#include <iostream>
#include <mach-o/getsect.h>

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);

	void setName(const std::string &name);

	~Zombie(void);

	void announce(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name);
void Say_Your_Origin(void *temp);
Zombie* zombieHorde( int N, std::string name );

#endif //INC_11_CPP_MODULE_ZOMBIE_H
