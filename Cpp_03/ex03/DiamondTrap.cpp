#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("no_name_clap_name"), ScavTrap(), FragTrap()
{
	this->HitPoints = FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->HitPoints= FragTrap::HitPoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	this->AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap  const &src) : ClapTrap(src), ScavTrap(src), FragTrap(src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "The DiamondTrap " << "'" + this->_name + "'" << " has been destroyed." << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &src)
{
	this->_name = src._name;
	this->HitPoints = src.HitPoints;
	this->EnergyPoints= src.EnergyPoints;
	this->AttackDamage = src.AttackDamage;
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "I'am " << this->_name << " and " << ClapTrap::name << std::endl;
}

// void	DiamondTrap::attack(const std::string &target)
// {
// 	ScavTrap::attack(target);
// }

