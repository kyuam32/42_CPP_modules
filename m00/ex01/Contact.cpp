
#include "Contact.h"

const std::string Contact::list[5] = {"first name",
									"last name",
									"nick name",
									"phone number",
									"darkest secret"};
Contact::Contact() { }
Contact::~Contact() { }


void Contact::setData()
{
	for (int i = FIRSTNAME; i <= SECRET; i++)
	{
		std::string buff;
		std::cout << list[i] << " : ";
		buff = getInput<std::string>();
		this->data[i] = buff;
	}
}

void Contact::printData()
{
	for (int i = FIRSTNAME; i <= SECRET; i++)
		std::cout << list[i] << " : " << this->data[i] << std::endl;
}

void Contact::printDataShorten()
{
	std::cout.width(10);
	std::cout << this->idx << "|";
	for (int i = 0; i < PHONENUM; i++)
	{
		std::cout.width(10);
		if (this->data[i].length() > 10)
			std::cout << this->data[i].substr(0,9) + "." << "|";
		else
			std::cout << this->data[i] << "|";
	}
	std::cout << std::endl;
}


void Contact::setIndex(int i)
{
	this->idx = i;
}

bool Contact::isBlank()
{
	for (int i = FIRSTNAME; i <= SECRET; i++)
	{
		if (!this->data[idx].empty())
			return false;
	}
	return true;
}

int Contact::getIndex() const
{
	return this->idx;
}




