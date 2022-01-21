
#include "Fixed.h"

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

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	setRawBits(fromInt(value));
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	setRawBits(fromFloat(value));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	std::cout << "Assignation operator called" << std::endl;
	this->setRawBits(ref.bits);
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

float Fixed::toFloat(void) const
{
	return (float(this->bits) / (1 << Fixed::fractional_bit));
}

int Fixed::toInt(void) const
{
	return (this->bits >> Fixed::fractional_bit);
}

int Fixed::fromInt(const int value)
{
	if (value > 8388607 || value < -8388608)
	{
		std::cerr << "out of range" << std::endl;
		std::cerr << "bits initialized Zero" << std::endl;
		return 0;
	}
	int res = value << 8;
	return res;
}

int Fixed::fromFloat(const float value)
{
	if (value > 8388607 || value < -8388608)
	{
		std::cerr << "out of range" << std::endl;
		std::cerr << "bits initialized Zero" << std::endl;
		return 0;
	}
	int res = roundf(value * (1 << Fixed::fractional_bit));
	return res;
}

std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
}
