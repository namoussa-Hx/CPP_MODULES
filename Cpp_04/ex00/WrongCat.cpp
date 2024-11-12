#include "WrongCat.hpp"

WrongCat::WrongCat()
{ 
	   std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat"; 
}

WrongCat::WrongCat( const WrongCat &src )
{
	std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat & WrongCat::operator=( const WrongCat &src )
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Wrong Cat sound" << std::endl;
}
