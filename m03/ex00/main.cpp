#include "ClapTrap.h"

int main(){

	ClapTrap *one = new ClapTrap("mem");
	ClapTrap two("good");

	one->attack("gigi");
	one->beRepaired(20);
	one->takeDamage(30);
	one->beRepaired(20);
}
