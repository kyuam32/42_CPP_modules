#include "Contact.h"
#include "Phonebook.h"


void inputChecker()
{
	if (std::cin.eof())
		throw std::string("EOF occurred!");
	else if (std::cin.bad())
		throw std::string("Bad bit occurred!");
	else if (std::cin.fail())
		throw std::string("Type error occurred!");
}

template<typename T>
T getInput()
{
	T ret;

	if (!(std::cin >> ret))
		inputChecker();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return (ret);
}

template<>
std::string getInput<std::string>()
{
	std::string ret;

	if (!(std::getline(std::cin, ret)))
		inputChecker();
	return (ret);
}

int main() {
	std::string command;
	Phonebook phonebook;

	try
	{
		while (true)
		{
			std::cout << "\nType one of these command [ ADD, SEARCH, EXIT ]" << std::endl;
			command = getInput<std::string>();
			if (command == "ADD" || command == "add")
				phonebook.addContact();
			else if (command == "SEARCH" || command == "search")
			{
				phonebook.printPhonebookTable();
				std::cout << "Choose your index : ";
				phonebook.printContact(getInput<int>());
			}
			else if (command == "EXIT" || command == "exit")
				break;
			else
				std::cout << "!! WRONG COMMAND !!" << std::endl;
		}
	}
	catch (std::string e)
	{
		std::cout << "\e[0;31m" << e << "\e[0m" << std::endl;
	}
	catch (...)
	{
		std::cout << "unexpected error" << std::endl;
	}
	return 0;
}