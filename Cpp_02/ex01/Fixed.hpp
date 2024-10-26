#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
    private:
    int _numberFixed;
    static const int _Bits = 8;
    public:
     Fixed();
     ~Fixed();
     Fixed(const int _n);
     Fixed(const float _fn);
     Fixed(const Fixed &src);
     Fixed &operator = (Fixed const &src);
    int getRawBits( void ) const;
	void setRowBits( int const row );
    float toFloat( void ) const;
    int toInt( void ) const;

};
std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif

