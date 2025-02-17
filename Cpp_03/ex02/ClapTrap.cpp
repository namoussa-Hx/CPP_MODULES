#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("DEFAULT"), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
    std::cout << "ClapTrap Parameterized constructor called" << std::endl;
}

ClapTrap::~ClapTrap() 
{
    std::cout << "ClapTrap Destructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &src)
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if(this == &src)
      return *this;
      
    this->name = src.name;
    this->HitPoints = src.HitPoints;
    this->EnergyPoints= src.EnergyPoints;
    this->AttackDamage = src.AttackDamage;

return *this;
}

void ClapTrap::attack(const std::string &target)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
    std::cout << "ClapTrap " << this->name << " attacks " 
    << target << " cousing " << this->AttackDamage
     << " points of damage." << std::endl;
   --this->EnergyPoints;
    }
    else if(EnergyPoints == 0)
    std::cout << "ClapTrap " << this->name << " is not able to attack " 
    << target << " no energy points left." << std::endl;
    else
    std::cout << "ClapTrap " << this->name << " is not able to attack " 
    << target << " no hit points left." << std::endl;
 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->HitPoints > amount)
        this->HitPoints -= amount;
    else if (this->HitPoints > 0)
		this->HitPoints = 0;
    else
    {
        std::cout << "ClapTrap " << this->name
         << " is already dead " << std::endl;
		return ;
    }
    
    std::cout << "ClapTrap " 
    << this->name << " was attacked and lost " 
    << amount << " hit points, he now has " 
    << this->HitPoints << " hit points." << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{

    if (this->EnergyPoints > 0 && this->HitPoints > 0 && this->HitPoints + amount <= 10)
    {
    this-> HitPoints += amount;
    std::cout << "ClapTrap " << this->name << " repaired itself ,amount " 
    << amount << " he now has " << this->HitPoints << "hit points." << std::endl;
     --this->EnergyPoints;
    }
    else if (this->EnergyPoints == 0)
		std::cout << "ClapTrap " << this->name << " is not able to repair itself, no energy points left." << std::endl;
	else if (this->HitPoints == 0)
		std::cout << "ClapTrap " << this->name << " is not able to repair itself,  no hit points left." << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " can't be repaired to have more than 10 hit points." << std::endl;
     
}
