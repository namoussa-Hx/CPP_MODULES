#include "Cat.hpp"

Cat::Cat() 
{ 
	std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat( const Cat &src ) 
{
	std::cout << "Cat copy constructor called" << std::endl;
     *this = src; 
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=( const Cat &src )
{
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

void	Cat::makeSound() const
{
	 std::cout << "Cat sound" << std::endl;
}

