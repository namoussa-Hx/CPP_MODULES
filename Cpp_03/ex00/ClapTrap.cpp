#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called" << std::endl;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this-> AttackDamage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Parameterized constructor called" << std::endl;
    this->name = name;
}

ClapTrap::~ClapTrap()
{
    std::cout << " Destructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

ClapTrap & ClapTrap::operator = (ClapTrap const &src)
{
    std::cout << "copy assignment operator called" << std::endl;
    if(this == &src)
      return *this;
 
return *this;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << this->name << " attacks " 
    << target << " cousing " << this->AttackDamage
     << " points of damage !" << std::endl;

   --this->EnergyPoints;

}

void ClapTrap::takeDamage(unsigned int amount)
{

    this->AttackDamage - amount;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    this-> HitPoints = amount;
    --this->EnergyPoints;
    
}
