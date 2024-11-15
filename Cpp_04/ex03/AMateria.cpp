#include "AMateria.hpp"

AMateria::AMateria()
{
	this->type = "";
	std::cout << "materia default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "materia Parameterized constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "materia Destructor called\n";
}

AMateria::AMateria(AMateria const &src)
{
	std::cout << "materia copy constructor called\n";
    *this = src;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    std::cout << "materia copy assignment operator called" << std::endl;
    if(this == &src)
      return *this;

    this->type = src.type;
 return *this;
}

std::string const &AMateria::getType() const
{
	return this->type ;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}


