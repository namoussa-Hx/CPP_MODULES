#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cctype>

class ClapTrap
{
    protected:

    std::string      name;
    unsigned int     HitPoints;
    unsigned int     EnergyPoints;
    unsigned int     AttackDamage;

    public:
    ClapTrap();
    ~ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap &operator = (ClapTrap const &src);
    
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif