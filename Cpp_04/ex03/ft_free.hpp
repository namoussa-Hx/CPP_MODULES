#ifndef FT_FREE_HPP
#define FT_FREE_HPP
#include <iostream>
#include "AMateria.hpp"

typedef struct s_garbage
{
    AMateria *content;
    struct s_garbage *next;

} t_garbage;

void gc_addback(t_garbage **head, AMateria* addr);
void    gc_free_list(t_garbage **head);


#endif