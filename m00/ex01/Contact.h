
#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include "main.h"

#define FIRSTNAME 0
#define LASTNAME 1
#define NICKNAME 2
#define PHONENUM 3
#define SECRET 4


class Contact
{
private:
	std::string data[5];
	int idx;

public:
	Contact();
	~Contact();

	static const std::string list[5];

	bool isBlank();
	void setData();
	void setIndex(int i);
	int getIndex() const;
	void printData();
	void printDataShorten();
};


#endif
