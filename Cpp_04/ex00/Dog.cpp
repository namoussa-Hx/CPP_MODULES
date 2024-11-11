#include "Dog.hpp"

Dog::Dog() 
{ 
    this->type = "Dog";
}

Dog::Dog( const Dog &src ) 
{
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
