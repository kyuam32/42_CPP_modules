#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main(){
//	HumanA *human1 = new HumanA("namkyu", "sword");
//	human1->Attack();
//	HumanB *human2 = new HumanB("heezin");
//	human2->Attack();
//
//	delete human1;
//	delete human2;

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}