#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "Default";
}

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(AMateria const &src)
{
    this->type = src.type;
}

AMateria &AMateria::operator=(const AMateria &src)
{
   (void)src;

 return *this;
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}


