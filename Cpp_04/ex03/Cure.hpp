#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const &src);
		Cure & operator=(Cure const &src);

		//std::string const &getType() const;
		Cure *clone() const;
		void use(ICharacter& target);
};

#endif
