#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice()
{
	this->type = "Ice";
	// std::cout << "Ice Default constructor called" << std::endl;;
}

Ice::~Ice()
{
	// std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(Ice const &src)
{
	this->type = src.getType();
	// std::cout << "Ice copy constructor called" << std::endl;
}

Ice & Ice::operator=(Ice const &src)
{
	(void)src;

	return (*this);
}

std::string const & Ice::getType( void ) const
{
	return (this->type);
}

Ice *Ice::clone() const
{
	Ice	*ptr = new Ice;
	return (ptr);
}

void Ice::use(ICharacter& target)
{
	std::string target_name = target.getName();

	std::cout << " shoots an ice bolt at " << target_name << std::endl;
}
