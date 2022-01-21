
#include "Fixed.h"

//todo 0 인 fixed
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(ref.getRawBits());
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->bits;
}

void Fixed::setRawBits(int raw)
{
	this->bits = raw;
}


