
#include "Phonebook.h"

Phonebook::Phonebook()
{
	for(int i = 0; i < 8; i++)
		this->contacts[i].setIndex(i);
}

Phonebook::~Phonebook() { }


void Phonebook::addContact()
{
	for(int idx = 0; idx < 8; idx++)
	{
		if (this->contacts[idx].isBlank())
		{
			this->contacts[idx].setData();
			return;
		}
	}
	for(int idx = 0; idx < 8; idx++)
		this->contacts[idx].setIndex(this->contacts[idx].getIndex() - 1);
	for(int idx = 0; idx < 8; idx++)
	{
		if(this->contacts[idx].getIndex() == -1)
		{
			this->contacts[idx].setData();
			this->contacts[idx].setIndex(7);
			return;
		}
	}
}

void Phonebook::printPhonebookTable()
{
	std::cout.width(10);
	std::cout << "index" << "|";
	for (int i = 0; i < PHONENUM; i++)
	{
		std::cout.width(10);
		std::cout << Contact::list[i] << "|";
	}
	std::cout << std::endl;
	for (int i= 0; i < 8; i++)
	{
		Phonebook::contacts[i].printDataShorten();
	}
}

void Phonebook::printContact(const int idx)
{
	if (idx < 0 || idx > 7)
		std::cout << "!!! array index out of bound !!!" << std::endl;
	else
		for (int i= 0; i < 8; i++)
			if (Phonebook::contacts[i].getIndex() == idx)
				Phonebook::contacts[i].printData();
}
