#include"Brain.hpp"


Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain( const Brain &src )
{ 
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src; 
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

Brain & Brain::operator=( const Brain &src )
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this == &src)
		return (*this);
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}
