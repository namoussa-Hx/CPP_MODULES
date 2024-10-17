#include "HumanB.hpp"

void HumanB::attack(void)
{
    if(!weapon)
        std::cout << this->name << "without arms" << std::endl;
    else
        std::cout << name 
        << " attack with their " 
        << this->weapon->getType() << std::endl; 
}

HumanB::HumanB(std::string name)
{
 this->name = name;
 this->weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::~HumanB(void)
{

}
