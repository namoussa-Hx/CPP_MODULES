#include "Character.hpp"

Character::Character(void) : name("Default")
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	this->name = name;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

Character::Character(Character const &src) : name(src.getName() + "_copy")
{
	for(int i = 0; i < 4; i++)
	{
		if ((src.inventory)[i])
			(this->inventory)[i] = (src.inventory[i])->clone();
	}
}

Character & Character::operator=(Character const &src)
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

void Character::equip(AMateria* m)
{
	int i = 0;

	if (!m)
		return ;
	while ((this->inventory)[i] != NULL && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	else if (!(this->inventory)[idx])
		return ;
	else
		(this->inventory)[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
 if ((idx >= 0 && idx < 4) && inventory[idx] != NULL)
        inventory[idx]->use(target);
}

