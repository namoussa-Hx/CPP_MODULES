#include "ScavTrap.hpp"

int main()
{
	std::cout << "--------------------ClapTrap---------------------------------" << std::endl;
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
	}
	std::cout << "--------------------ScavTrap---------------------------------" << std::endl;
	{
		ScavTrap a;
		ScavTrap b("Scav");

		a.attack("a_Trap");
		a.beRepaired(22);
		a.takeDamage(21);
		a.beRepaired(22);
		a.guardGate();
		a.guardGate();
		b.attack("b_Trap");
		b.takeDamage(101);
		b.takeDamage(15);
		b.attack("b_Trap");
	}
	return (0);
}





