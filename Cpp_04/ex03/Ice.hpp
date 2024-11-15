#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &src);
		Ice & operator=(const Ice  &src);

		//std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
};

#endif
