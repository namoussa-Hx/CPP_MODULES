#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"

Cure::Cure()
{
	this->type = "Cure";
}

Cure::~Cure()
{
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	this->type = src.getType();
}

Cure & Cure::operator=(Cure const &src)
{
        (void)src;

	return (*this);
}

// std::string const &Cure::getType( void ) const
// {
// 	return (this->type);
// }

Cure *Cure::clone() const
{
	Cure	*ptr = new Cure;
	return (ptr);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
