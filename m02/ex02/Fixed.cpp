
#include "Fixed.h"

Fixed::Fixed()
{
	this->setRawBits(0);
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed::Fixed(const int value)
{
	setRawBits(fromInt(value));
}

Fixed::Fixed(const float value)
{
	setRawBits(fromFloat(value));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &ref)
{
	this->setRawBits(ref.bits);
	return *this;
}

int Fixed::getRawBits(void) const
{
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

bool Fixed::operator<(const Fixed &ref)
{
	return (this->bits < ref.bits);
}

bool Fixed::operator<=(const Fixed &ref)
{
	return (this->bits <= ref.bits);
}

bool Fixed::operator>(const Fixed &ref)
{
	return (this->bits > ref.bits);
}

bool Fixed::operator>=(const Fixed &ref)
{
	return (this->bits >= ref.bits);
}

bool Fixed::operator==(const Fixed &ref)
{
	return (this->bits == ref.bits);
}

bool Fixed::operator!=(const Fixed &ref)
{
	return (this->bits != ref.bits);
}

Fixed Fixed::operator+(const Fixed &ref)
{
	return (Fixed(this->toFloat() + ref.toFloat()));
}

Fixed Fixed::operator-(const Fixed &ref)
{
	return (Fixed(this->toFloat() - ref.toFloat()));
}

Fixed Fixed::operator*(const Fixed &ref)
{
	return (Fixed(this->toFloat() * ref.toFloat()));
}

Fixed Fixed::operator/(const Fixed &ref)
{
	return (Fixed(this->toFloat() / ref.toFloat()));
}

Fixed & Fixed::operator++(int)
{
	Fixed temp = *this;
	this->bits++;
	return temp;
}

Fixed Fixed::operator++()
{
	this->bits++;
	return (*this);
}
Fixed & Fixed::operator--(int)
{
	Fixed temp = *this;
	this->bits--;
	return temp;
}

Fixed Fixed::operator--()
{
	this->bits--;
	return (*this);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}


std::ostream &operator<<(std::ostream &out, const Fixed &ref)
{
	out << ref.toFloat();
	return out;
}
