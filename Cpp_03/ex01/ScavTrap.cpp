#include "ScavTrap.hpp"



ScavTrap::ScavTrap(): ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    this->guardingGate = false;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructorcalled" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "ScavTrap copy constructor called " << std::endl;
    *this = src;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	this->guardingGate = false;
	std::cout << "ScavTrap Parameterized Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if(this == &src)
       return *this;

	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints= src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
    this->guardingGate = src.guardingGate;

return *this;
}

void ScavTrap::attack(const std::string &target)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
    std::cout << "ScavTrap " << this->name << " attacks " 
    << target << " cousing " << this->AttackDamage
     << " points of damage." << std::endl;
   --this->EnergyPoints;
    }
    else if(EnergyPoints == 0)
    std::cout << "ScavTrap " << this->name << " is not able to attack " 
    << target << " no energy points left." << std::endl;
    else
    std::cout << "ScavTrap " << this->name << " is not able to attack " 
    << target << " no hit points left." << std::endl;
 
}

void	ScavTrap::guardGate(void)
{
	if (this->guardingGate == false)
	{
		this->guardingGate = true;
		std::cout << "ScavTrap " << this->name 
        << " is now guarding the gate." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->name 
        << " is already guarding the gate." << std::endl;
}

