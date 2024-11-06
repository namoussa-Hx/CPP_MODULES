#include "ClapTrap.hpp"

int main()
{
	
		ClapTrap obj1;
		ClapTrap obj_2("najib");

		obj1.attack("robot");
		obj1.takeDamage(10);
		obj1.takeDamage(10);
		obj1.beRepaired(5);
		obj1.attack("robot");
		obj_2.beRepaired(3);
		obj_2.attack("robot_2");
		obj_2.beRepaired(3);
		
	return (0);
}
