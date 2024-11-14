#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
	std::cout << "Character Default constructor called" << std::endl;
	for(int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
    std::cout << "Character Destructor called" << std::endl;
}

std::string const &Character::getName() const
{
	return (this->name);
}

Character::Character(Character const &src) : name(src.getName() + "_copy")
{
	 std::cout << "Character copy constructor called" << std::endl;
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
	{
		std::cout << this->name << " tried to equip nothing and it did nothing\n";
		return ;
	}
	while ((this->inventory)[i] != 0 && i < 4)
		i++;
	if (i >= 4)
	{
		std::cout << this->name << " can't equip more than 4 Materia";
		return ;
	}
	(this->inventory)[i] = m;
	std::cout << this->name << " equipped materia " << m->getType() << " in slot " << i << "\n";
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		std::cout << this->name << " tried to unequip nothing at slot " << idx << " and it did nothing\n";
	else if (!(this->inventory)[idx])
		std::cout << this->name << " has nothing equipped at slot " << idx << " so he can't unequip it\n";
	else
	{
		AMateria *ptr = (this->inventory)[idx];
		std::cout << this->name << " unequipped " << ptr->getType() << " at slot "<< idx << "\n";
		(this->inventory)[idx] = 0;
	}
}

void Character::use(int idx, ICharacter& target)
{
	std::string	name = this->getName();

	if (idx < 0 || idx >= 4 || !(this->inventory)[idx])
	{
		std::cout << "Nothing found to use at index " << idx << std::endl;
		return ;
	}
	std::cout << name;
	((this->inventory)[idx])->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->inventory)[idx];
}
