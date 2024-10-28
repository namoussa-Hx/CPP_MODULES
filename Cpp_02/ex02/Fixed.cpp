#include "Fixed.hpp"


Fixed::Fixed()
{
	this->_numberFixed = 0;
}

Fixed::Fixed(const int _number)
{
    this->_numberFixed = _number << this->_Bits;
}
 
Fixed::Fixed( const float _fnumber )
{
	this->_numberFixed = (int)(roundf(_fnumber * (1 << this->_Bits)));
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
	rtn.setRowBits((this->toInt() * src.toInt()));
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
	rtn.setRowBits((this->toInt() / src.toInt()));
	return (rtn);
}

Fixed Fixed::operator-(const Fixed &src) const
{
	Fixed rtn;
	rtn.setRowBits((this->_numberFixed - src.getRawBits()));
	return (rtn);
}

Fixed & Fixed::operator++( void )
{
	++this->_numberFixed;
	return (*this);
}

Fixed & Fixed::operator--( void )
{
	--this->_numberFixed;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed rtn(*this);
	operator++();
	return (rtn);
}

Fixed Fixed::operator--( int )
{
	Fixed rtn(*this);
	operator--();
	return (rtn);
}

bool Fixed::operator > (const Fixed &src) const
{
	return (this->getRawBits() > src.getRawBits());
}

bool Fixed::operator < (const Fixed &src) const
{
	return (this->getRawBits() < src.getRawBits());
}

bool Fixed::operator >= (const Fixed &src) const
{
	return (this->getRawBits() >= src.getRawBits());
}

bool Fixed::operator <= (const Fixed &src) const
{
	return (this->getRawBits() <= src.getRawBits());
}

bool Fixed::operator == (const Fixed &src) const
{
	return (this->getRawBits() == src.getRawBits());
}

bool Fixed::operator != (const Fixed &src) const
{
	return (this->getRawBits() != src.getRawBits());
}

Fixed& Fixed::min ( Fixed & first, Fixed &second)
{
    if(first > second)
		return (second);
	else
		return (first);
}

const Fixed  &Fixed::min(const Fixed &first, const Fixed &second)
{
	if(first > second)
	 return (second);
	else
		return (first);
}

Fixed& Fixed::max ( Fixed & first, Fixed &second)
{
    if(first > second)
		return (first);
	else
		return (second);
}

const Fixed  &Fixed::max(const Fixed &first, const Fixed &second)
{
	if(first > second)
	 return (first);
	else
		return (second);
}






