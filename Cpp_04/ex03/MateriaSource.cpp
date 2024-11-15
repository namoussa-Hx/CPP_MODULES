#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource  &src)
{
	for (int i = 0; i < 4; i++)
	{

		if (src.inventory[i])
			this->inventory[i] = (src.inventory[i])->clone();
	}
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
		if (this->inventory[i] != NULL)
			delete this->inventory[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i = 0;

	 if (!m)
        return ;
	while ((this->inventory)[i] != NULL && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << "Can't learn more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while ((this->inventory)[i] && ((this->inventory)[i])->getType() != type && i < 4)
		i++;
	if (i >= 4 || !(this->inventory)[i])
	{
		std::cout << type << " failed create materia\n";
		return (NULL);
	}
	return (((this->inventory)[i])->clone());
}
