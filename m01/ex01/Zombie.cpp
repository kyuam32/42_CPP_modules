
#include "Zombie.h"

Zombie::Zombie()
{
	Say_Your_Origin((void *)this);
	std::cout << "anonymous zombie has born" << std::endl;
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
	Say_Your_Origin((void *)this);
	std::cout << this->name << " BraiiiiiiinnnzzzZ" << std::endl;
}

void Zombie::setName(const std::string &name)
{
	Say_Your_Origin((void *)this);
	Zombie::name = name;
	std::cout << this->name << " is named" << std::endl;
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
