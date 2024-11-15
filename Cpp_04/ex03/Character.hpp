#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"


class Character : public ICharacter
{
	private:
		AMateria*			inventory[4];
		std::string 	name;
	public:
	    Character(void);
		Character(const std::string &name);
		Character(const Character  &src);
		~Character();
		Character & operator=(const Character &src);

		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
