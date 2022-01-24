#include "ScavTrap.h"
#include "FragTrap.h"

int main(){
	FragTrap temp = FragTrap("1");
	FragTrap temp2 = FragTrap("2");
	FragTrap temp3;
	temp3.showStat();
	temp3 = temp2;
	temp3.attack("32");
	temp3.highFivesGuys();
}
