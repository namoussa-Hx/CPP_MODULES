#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("defaultD_clap_trap")
{
	std::cout << "DiamondTrap Default Constructor called" << std::endl;
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
	this->name = "DEFAULT_DIAMOND";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_trap")
{
	std::cout << "DiamondTrap Parameterized Constructor called" << std::endl;
	this->name = name;
	this->HitPoints= FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap  const &src) : ClapTrap(src), FragTrap(src), ScavTrap(src)
{
	std::cout << "DiamondTrap copy constructor called " << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	 std::cout << "DiamondTrap Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;

	  if(this == &src)
       return *this;

	this->name = src.name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints= src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;

	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'am " << this->name << " and " << ClapTrap::name << std::endl;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

