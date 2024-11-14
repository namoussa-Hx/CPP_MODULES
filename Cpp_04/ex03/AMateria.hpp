#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
AMateria(std::string const & type);
AMateria();
~AMateria();
AMateria(const AMateria &src);
AMateria &operator = (const AMateria &src);
std::string const &getType() const;
virtual AMateria* clone() const = 0;
virtual void use(ICharacter& target);
};

#endif 