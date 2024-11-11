#include "Dog.hpp"

Dog::Dog() 
{ 
    this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog( const Dog &src ) 
{
     *this = src; 
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog Destructor called" << std::endl;
}

Dog & Dog::operator=( const Dog &src )
{
	if (this == &src)
		return (*this);
	this->type = src.type;

	delete brain;
	this->brain = new Brain();
	*this->brain = *src.brain;
	return (*this);
}

void	Dog::makeSound() const
{
	 std::cout << "Dog sound" << std::endl;
}
