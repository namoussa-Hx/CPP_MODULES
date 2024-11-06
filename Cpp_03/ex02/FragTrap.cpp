#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;

	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Deconstructor called" << std::endl;

}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrapcopy constructor called " << std::endl;
    *this = src;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->HitPoints = 100;
	this->EnergyPoints = 50;
	this->AttackDamage = 20;
	std::cout << "FragTrap Parameterized Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
    if(this == &src)
       return *this;

	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints= src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
   

return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " called high five function " << std::endl;
}
