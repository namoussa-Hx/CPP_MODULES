#include "Fixed.hpp"


Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_numberFixed = 0;
}

Fixed::Fixed(const int _n)
{
    std::cout << "int constructor called" << std::endl;
    this->_numberFixed = _n << this->_Bits;
}
 
Fixed::Fixed( const float fnumber )
{
	 std::cout << "Float constructor called" << std::endl;
	this->_numberFixed = (int)(roundf(fnumber * (1 << this->_Bits)));
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
    this->_numberFixed = src._numberFixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
	std::cout << "copy assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->_numberFixed = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
