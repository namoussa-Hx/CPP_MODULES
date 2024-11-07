#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	// std::cout << "--------------------ClapTrap---------------------------------" << std::endl;
	// {
	// 	ClapTrap obj1;
	// 	ClapTrap obj_2("najib");

	// 	obj1.attack("enemy_obj1");
	// 	obj1.takeDamage(10);
	// 	obj1.takeDamage(10);
	// 	obj1.beRepaired(5);
	// 	obj1.attack("enemy_obj1");
	// 	obj_2.beRepaired(3);
	// 	obj_2.attack("enemy_obj2");
	// 	obj_2.beRepaired(3);
	// }
	// std::cout << "--------------------ScavTrap---------------------------------" << std::endl;
	// {
	// 	ScavTrap a;
	// 	ScavTrap b("Scav");
   
	// 	a.attack("Scav_enemyA");
	// 	a.beRepaired(22);
	// 	a.takeDamage(21);
	// 	a.beRepaired(22);
	// 	a.guardGate();
	// 	a.guardGate();
	// 	b.attack("Scav_enemyB");
	// 	b.takeDamage(101);
	// 	b.takeDamage(15);
	// 	b.attack("Scav_enemyB");
	// }
	// std::cout << "--------------------FragTrap---------------------------------" << std::endl;
	// {
	// 	FragTrap c;
	// 	FragTrap d("d_FRAG");

	// 	c.highFivesGuys();
	// 	c.attack("Frag_enemyC");
	// 	c.takeDamage(101);
	// 	c.takeDamage(1);
	// 	c.attack("Frag_enemyC");
	// 	d.highFivesGuys();
	// }
	std::cout << "--------------------DiamondTrap---------------------------------" << std::endl;
	{
		
		DiamondTrap a;
		DiamondTrap b("OBJB_DAIMOND");
		DiamondTrap c(a);

		
		a.whoAmI();
		a.attack("diamond_enemyA");
		b.whoAmI();
		b.attack("diamond_enemyB");
		c.whoAmI();
	}
	return (0);
}






