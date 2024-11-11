#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	   std::cout << "WrongAnimal Default constructor called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

std::string	WrongAnimal::getType() const 
{
    return (this->type);
}

void		WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal sound " << std::endl;
}