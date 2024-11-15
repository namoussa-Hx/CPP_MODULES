#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	// std::cout << "materia source default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
	{

		if (src.inventory[i])
			this->inventory[i] = (src.inventory[i])->clone();
	}
	// std::cout << "materia source copy constructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
		if (src.inventory[i])
			this->inventory[i] = (src.inventory[i])->clone();
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	// std::cout << "Materia source Destoryed called " << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	
	// std::cout << "Materia " << m->getType() << " learned\n";
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while ((this->inventory)[i] && ((this->inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->inventory)[i])
	{
		std::cout << type << " materia does not exit\n";
		return (NULL);
	}
	std::cout << "Materia " << type << " created\n";
	return (((this->inventory)[i])->clone());
}
