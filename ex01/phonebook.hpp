
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class Phonebook
{
    private:
        Contact contacts[8];
        int current_count;
        int oldest_count;
    public:
        Phonebook();
        int add_contact();
        void search_contact();
};


#endif