#include "Fixed.hpp"


Fixed::Fixed()
{
	this->_numberFixed = 0;
}

Fixed::Fixed(const int _n)
{
    this->_numberFixed = _n << this->_Bits;
}
 
Fixed::Fixed( const float fnumber )
{
	this->_numberFixed = (int)(roundf(fnumber * (1 << this->_Bits)));
}

Fixed::Fixed(const Fixed &src)
{
    this->_numberFixed = src._numberFixed;
}

Fixed::~Fixed()
{

}

Fixed & Fixed::operator=(const Fixed &src)
{
	if (this == &src)
		return *this;
	this->_numberFixed = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	return (this->_numberFixed);
}

void Fixed::setRowBits( int const row)
{
	this->_numberFixed = row;
}

float	Fixed::toFloat() const
{
	return ((float)this->_numberFixed / (1 << this->_Bits));
}

int Fixed::toInt() const
{
	return ((int)(this->_numberFixed >> this->_Bits));
}
std::ostream &operator<<(std::ostream &op, const Fixed &a)
{
	op << a.toFloat();
	return (op);
}

Fixed Fixed::operator*(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_numberFixed * src.toInt()));
	return (rtn);
}

Fixed Fixed::operator+(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_numberFixed + src.getRawBits()));
	return (rtn);
}

Fixed Fixed::operator/(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_numberFixed << this->_Bits / src.getRawBits()));
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_numberFixed - src.getRawBits()));
	return (rtn);
}




