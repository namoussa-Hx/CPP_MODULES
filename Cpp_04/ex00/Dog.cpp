#include "Dog.hpp"

Dog::Dog() 
{ 
	std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog( const Dog &src ) 
{
	std::cout << "Dog copy constructor called" << std::endl;
     *this = src; 
}

Dog::~Dog()
{
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=( const Dog &src )
{
	if (this == &src)
		return (*this);
	this->type = src.type;
	return (*this);
}

void	Dog::makeSound() const
{
	 std::cout << "Dog sound" << std::endl;
}
