#include "ScavTrap.h"

int main(){
	ScavTrap temp = ScavTrap("1");
	ScavTrap temp2 = ScavTrap("2");
	ScavTrap temp3;
	temp3 = temp2;

	temp.guardGate();
	temp.showStat();
	temp.attack("AAAAA");
	temp.takeDamage(42);
	temp.beRepaired(44);
}
