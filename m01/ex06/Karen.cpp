
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
	std::cout << "[DEBUG]"<< std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "[INFO]"<< std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[WARNING]"<< std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ERROR]"<< std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level)
{
	std::string table[4] = { "DEBUG",
			"INFO",
			"WARNING",
			"ERROR",
	};
	int found = std::find(table, table + 4, level) - table;

	switch (found)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}

//	for (int i = 0; i < 4; i++)
//	{
//		if (ftable[i].status == level)
//		{
//			return;
//		}
//	}
	return;
}
