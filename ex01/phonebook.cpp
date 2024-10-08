#include "phonebook.hpp"

Phonebook::Phonebook()
{
    this->contact_count = 0;
}

void Phonebook::add_contact()
{
    if (this->contact_count == 8)
    {
        this->contact_count = 0;
    }
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, first_name);
    contact.set_first_name(first_name);

    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);
    contact.set_last_name(last_name);

    std::cout << "Enter nickname: ";
    std::getline(std::cin, nickname);
    contact.set_nickname(nickname);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, phone_number);
    contact.set_phone_number(phone_number);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkest_secret);
    contact.set_darkest_secret(darkest_secret);

    this->contacts[this->contact_count] = contact;
    this->contact_count++;
}

void Phonebook::search_contact()
{
    if (this->contact_count == 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return;
    }
    std::cout << "    index|first_name|last_name|nickname|phone_number|darkest_secret" << std::endl;
    for (int i = 0; i < this->contact_count; i++)
    {
        std::cout << std::setw(9) << i + 1 << "|";
        std::cout << std::setw(9) << this->contacts[i].get_first_name().substr(0, 10) << "|";
        std::cout << std::setw(9) << this->contacts[i].get_last_name().substr(0, 10) << "|";
        std::cout << std::setw(9) << this->contacts[i].get_nickname().substr(0, 10) << "|";
        std::cout << std::setw(9) << this->contacts[i].get_phone_number().substr(0, 10) << "|";
        std::cout << std::setw(9) << this->contacts[i].get_darkest_secret().substr(0, 10) << "|";
        std::cout << std::endl;
    }
    std::string index;
    std::cout << "Enter index: ";
    std::getline(std::cin, index);
    if (index.length() != 1 || !isdigit(index[0]) || index[0] < '1' || index[0] > '8')
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }
    int i = index[0] - '1';
    this->contacts[i].print_contact();
}


int main ()
{
    Phonebook phonebook;
    std::string command;

    while(1)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);

        if(command.empty())
            continue;
        if (command == "ADD")
        {
            std::cout << "ADssdD" << std::endl;
            phonebook.add_contact();
        }
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return 0;
}