
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class Phonebook
{
    private:
        Contact contacts[8];
        int contact_count;
    public:
        Phonebook();
        void add_contact();
        void search_contact();
        // void print_contacts();
};


#endif