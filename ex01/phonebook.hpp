
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class Phonebook
{
    private:
        Contact contacts[8];
        int contact_count;
        int oldest_contact;
    public:
        Phonebook();
        int add_contact();
        void search_contact();
};


#endif