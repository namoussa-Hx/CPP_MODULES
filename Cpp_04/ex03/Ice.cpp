#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Ice::Ice()
{
	this->type = "Ice";
}

Ice::~Ice()
{
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	this->type = src.getType();
}

Ice & Ice::operator=(Ice const &src)
{
	(void)src;

	return (*this);
}

// std::string const & Ice::getType( void ) const
// {
// 	return (this->type);
// }

Ice *Ice::clone() const
{
	Ice	*ptr = new Ice;
	return (ptr);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
