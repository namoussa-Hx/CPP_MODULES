#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
# include "ft_free.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	inventory[4];
		t_garbage *head;
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &src);
		~MateriaSource();
		MateriaSource &operator=(MateriaSource const &src);
		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const &type);
};

#endif
