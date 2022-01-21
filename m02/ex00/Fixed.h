
#ifndef INC_11_CPP_MODULE_FIXED_H
#define INC_11_CPP_MODULE_FIXED_H

#include <iostream>

class Fixed
{
private:
	int bits;
	static const int fractional_bit = 8;
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	Fixed &operator=(const Fixed &ref);
	int getRawBits( void ) const;
	void setRawBits(int raw);
};


#endif //INC_11_CPP_MODULE_FIXED_H
