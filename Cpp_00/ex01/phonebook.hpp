
#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "contact.hpp"
#include <iomanip>

class PhoneBook
{
    private:
        Contact contacts[8];
        int current_count;
        int oldest_count;
    public:
        PhoneBook();
        int add_contact();
        void search_contact();
};


#endif