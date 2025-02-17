#include "Cat.hpp"

Cat::Cat() 
{ 
	std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat( const Cat &src ) 
{
	std::cout << "Cat copy constructor called" << std::endl;
     *this = src; 
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat & Cat::operator=( const Cat &src )
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);

	delete brain;
	this->type = src.type;
	this->brain = new Brain();
	*this->brain = *src.brain;
	return (*this);
}

void	Cat::makeSound() const
{
	 std::cout << "Cat sound" << std::endl;
}

