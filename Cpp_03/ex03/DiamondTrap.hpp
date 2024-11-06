#ifndef DIAMONDTRAP_HPP
#define DIAMONTRAP_HPP


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
    private:
     std::string _name;
    public:

    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string _name);
    DiamondTrap(const DiamondTrap &src);
    DiamondTrap &operator = (DiamondTrap const &src);

    // void attack(const std::string &);
    void whoAmI();

};

#endif