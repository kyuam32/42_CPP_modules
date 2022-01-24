
#ifndef INC_11_CPP_MODULE_FIXED_H
#define INC_11_CPP_MODULE_FIXED_H

#include <iostream>
#include <bitset>
#include <cmath>

class Fixed
{
private:
	int bits;
	static const int fractional_bit = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	Fixed(const int value);
	Fixed(const float value);
	~Fixed();

	Fixed &operator=(const Fixed &ref);

	bool operator<(const Fixed &ref);
	bool operator<=(const Fixed &ref);
	bool operator>(const Fixed &ref) ;
	bool operator>=(const Fixed &ref);
	bool operator==(const Fixed &ref);
	bool operator!=(const Fixed &ref);

	Fixed operator+(const Fixed &ref);
	Fixed operator-(const Fixed &ref);
	Fixed operator*(const Fixed &ref);
	Fixed operator/(const Fixed &ref);

	Fixed operator++(int);
	Fixed &operator++();
	Fixed operator--(int);
	Fixed &operator--();

	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);

	int getRawBits( void ) const;
	void setRawBits(int raw);
	float toFloat(void) const;
	int toInt(void) const;

	int fromInt(const int value);
	int fromFloat(const float value);

};

std::ostream &operator<<(std::ostream &out, const Fixed &ref);

#endif //INC_11_CPP_MODULE_FIXED_H

