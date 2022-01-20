#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *horde = new Zombie[N];

	for (int i = 0; i < N ; i++)
	{
		std::string temp = name + std::to_string(i);
		horde[i].setName(temp);
	}
	return horde;
}
