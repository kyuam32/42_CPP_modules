
#include "Karen.h"

Karen::Karen()
{
	std::cout << "I'm Karem" << std::endl;
}

Karen::~Karen()
{
	std::cout << "Good Bye" << std::endl;
}

void Karen::debug(void)
{
	std::cout << "DEBUG : ";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "INFO : ";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "WARNING : ";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "ERROR : ";
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	t_jumptable ftable[4] = {
			{"DEBUG", &Karen::debug},
			{"INFO", &Karen::info},
			{"WARNING", &Karen::warning},
			{"ERROR", &Karen::error},
	};
	for (int i = 0; i < 4; i++)
	{
		if (ftable[i].status == level)
		{
			(this->*ftable[i].ptr)();
			return;
		}
	}
	return;
}
