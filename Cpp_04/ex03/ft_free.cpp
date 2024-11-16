#include "ft_free.hpp"

void gc_addback(t_garbage **head, AMateria* addr) 
{
    t_garbage* new_node = new t_garbage;
    new_node->content = addr;
    new_node->next = NULL;

    if (!*head) 
        *head = new_node;
    else 
    {
        t_garbage* temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
    }
}


void gc_free_list(t_garbage **head)
 {
    t_garbage* temp;

    while (*head) 
    {
        temp = NULL;
        temp = *head;
        *head = (*head)->next;
        delete temp->content;
        delete temp;
        // std::cout << temp->content->getType() << std::endl;
    }
    head = NULL;
}
