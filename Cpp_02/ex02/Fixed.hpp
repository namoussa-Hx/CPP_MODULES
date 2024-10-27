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

    Fixed operator + ( const Fixed &src ) const;
	Fixed operator - ( const Fixed &src ) const;
	Fixed operator * ( const Fixed &src ) const;
	Fixed operator / ( const Fixed &src ) const;


	Fixed & operator ++ ( void ); //pre increment
	Fixed & operator -- ( void ); //pre decrement
	Fixed operator ++ ( int );  //post increment
	Fixed operator -- ( int ); //post decrement

	bool operator > ( const Fixed &src ) const;
	bool operator < ( const Fixed &src ) const;
	bool operator >= ( const Fixed &src ) const;
	bool operator <= ( const Fixed &src ) const;
	bool operator == ( const Fixed &src ) const;
	bool operator != ( const Fixed &src ) const;

	static Fixed &min ( Fixed & first, Fixed &second);
	const static Fixed &min ( const Fixed & first, const Fixed &second);
	static Fixed &max ( Fixed & first, Fixed &second);
	const static Fixed &max ( const Fixed & first, const Fixed &second);

};
std::ostream &operator<<(std::ostream &op, const Fixed &a);

#endif
