#include "Zombie.h"

void *stack_bottom;

bool IS_IN_STACK(void *x) __attribute__((noinline));
bool IS_IN_STACK(void *x) {
	void *stack_top = &stack_top;
	return x <= stack_bottom && x >= stack_top;
}

bool IS_IN_STATIC(void *x){
	unsigned long end = get_end();
	if ((void*)(x) <= (void*)end)
		return TRUE;
	return FALSE;
}

void Say_Your_Origin(void *temp){
	if (IS_IN_STACK(temp))
		std::cout <<RED "STACK  " NC;
	else if (IS_IN_STATIC(temp))
		std::cout <<RED "STATIC " NC;
	else
		std::cout <<GRN "HEAP   " NC;
}

int main(){
	int bottom;
	stack_bottom = &bottom;

	Zombie zombie0 = Zombie("zom0");
	Zombie *zombie1 = new Zombie("zom1");
	Zombie *zombie2 = new Zombie("zom2");
	Zombie *zombie3 = newZombie("zom3");
	Zombie *zombie4 = newZombie("zom4");

	zombie0.announce();
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	zombie4->announce();

	randomChump("zom_ran_0");
	randomChump("zom_ran_1");
	randomChump("zom_ran_2");

	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete zombie4;

	Zombie *horde = zombieHorde(5, "SwarmOfZombie");
	delete[] horde;
	return (0);
}