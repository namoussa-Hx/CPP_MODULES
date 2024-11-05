
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_pts > 0 && this->_hit_pts > 0 && this->_hit_pts + amount <= 10)
	{
		this->_hit_pts += amount;
		std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " of hit points, he now has " << this->_hit_pts << "hit points." << std::endl;
		this->_energy_pts--;
	}
	else if (this->_energy_pts == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough energy points.\033[0m" << std::endl;
	else if (this->_hit_pts == 0)
		std::cout << "\033[31mClapTrap " << this->_name << " is not able to repair itself, because he doesn't have enough hit points.\033[0m" << std::endl;
	else
		std::cout << "\033[33mClapTrap " << this->_name << " can't be repaired to have more than 10 hit points.\033[0m" << std::endl;
}