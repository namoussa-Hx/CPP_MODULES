#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure() :  type("cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::~Cure()
{
	 std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(Cure const &src) : type(src.getType())
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure & Cure::operator=(Cure const &src)
{
        (void)src;

	return (*this);
}

std::string const &Cure::getType( void ) const
{
	return (this->type);
}

Cure *Cure::clone() const
{
	Cure	*ptr = new Cure;
	return (ptr);
}

void Cure::use(ICharacter &target)
{
	std::string target_name = target.getName();

	std::cout << " heals " << target_name << "\'s wounds" << std::endl;
}
