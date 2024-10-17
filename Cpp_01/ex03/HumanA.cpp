#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << name 
    << " attack with their " 
    << this->weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{

}


HumanA::~HumanA(void)
{

}
