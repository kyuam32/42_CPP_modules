
#include "Zombie.h"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	Say_Your_Origin((void *)this);
	std::cout << this->name << " has born" << std::endl;
}

Zombie::~Zombie(void)
{
	Say_Your_Origin((void *)this);
	std::cout << this->name << " dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << " BraiiiiiiinnnzzzZ" << std::endl;
}


Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}

void randomChump(std::string name)
{
	Zombie temp = Zombie(name);
	temp.announce();
	return;
}
