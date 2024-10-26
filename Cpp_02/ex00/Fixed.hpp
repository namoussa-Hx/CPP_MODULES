#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
    private:
    int _numberFixed;
    static const int _Bits = 8;
    public:
     Fixed();
     ~Fixed();
     Fixed(const Fixed &src);
     Fixed &operator = (Fixed const &src);
    int getRawBits( void ) const;
	void setRowBits( int const row );

};


#endif
