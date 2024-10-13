#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->current_count = 0;
    this->oldest_count = 0;
}

int PhoneBook::add_contact()
{
    Contact contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "Enter first name: ";
    if(!(std::getline(std::cin, first_name)))
        return 1;
    if(first_name.empty())
        return 0;
    contact.set_first_name(first_name);

    std::cout << "Enter last name: ";
     if(!(std::getline(std::cin, last_name)))
        return 1;
    if(last_name.empty())
        return 0;
    contact.set_last_name(last_name);

    std::cout << "Enter nickname: ";
     if(!(std::getline(std::cin, nickname)))
        return 1;
    if(nickname.empty())
        return 0;
    contact.set_nickname(nickname);

    std::cout << "Enter phone number: ";
     if(!(std::getline(std::cin, phone_number)))
        return 1;
    if(phone_number.empty())
       return 0;
    contact.set_phone_number(phone_number);

    std::cout << "Enter darkest secret: ";
     if(!(std::getline(std::cin, darkest_secret)))
        return 1;
    if(darkest_secret.empty())
        return 0;
    contact.set_darkest_secret(darkest_secret);

    this->contacts [current_count % 8] = contact;
	this->current_count++;
	if (this->current_count <= 8)
		this->oldest_count = this->current_count;
  return 0;
}

std::string	check_dot(std::string content)
{
	if (content.length() > 10)
	{
		content.erase(content.begin() + 9, content.end());
		content.append(".");
	}
	return (content);
}

void PhoneBook::search_contact()
{
    if (this->oldest_count== 0)
    {
        std::cout << "Phonebook is empty" << std::endl;
        return;
    }
    std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < this->oldest_count; i++)
	{
		std::cout << "|" << std::setw(10) << i + 1
		<< "|" << std::setw(10) << check_dot(this->contacts[i].get_first_name())
		<< "|" << std::setw(10) << check_dot(this->contacts[i].get_last_name())
		<< "|" << std::setw(10) << check_dot(this->contacts[i].get_nickname()) << "|"
		<< std::endl;
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

int main (int ac, char **av)
{
    PhoneBook phonebook;
    std::string command;
    (void)av;

    if(ac > 1)
       return 1;
    while(1)
    {
        std::cout << "Enter a command: ";
        if (!(std::getline(std::cin, command)))
            break;
        if(command.empty())
            continue;
        if (command == "ADD")
        {
            if(phonebook.add_contact() == 1)
                break ;
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
