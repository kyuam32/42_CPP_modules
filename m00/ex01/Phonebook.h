
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.h"

class Phonebook
{
private:
	Contact contacts[8];

public:
	Phonebook();
	~Phonebook();

	void addContact();

	void printPhonebookTable();

	void printContact(int idx);
};


#endif
