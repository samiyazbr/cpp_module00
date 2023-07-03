#include "PhoneBook.hpp"

Contact:: Contact(void) : found(false) {}

//void Contact::execute_command(std::string cmd)
//{
//	if (cmd == "ADD")
//		add_contact
//	if (cmd == "SEARCH")
//		search_contact
//	if (cmd == "EXIT")
//		exit_program
//}

Contact::Contact(std::string	first_name, std::string	last_name, std::string	nick_name,
		std::string	darkest_secret, std::string	phone_number) : first_name(first_name), last_name(last_name),
		nick_name(nick_name), darkest_secret(darkest_secret), phone_number(phone_number)
		{
		}

void Contact::print_contact(int num)
{
	if (found == true)
	{
		std::cout << std::setw(10) <<std::right;
		std::cout << num << "|";
		std::cout << std::setw(10) <<std::right;
		if (first_name.length() > 10)
			std::cout << first_name.substr(0,9).append(".") << "|";
		else
			std::cout << first_name << "|";
		std::cout << std::setw(10) <<std::right;
		if (last_name.length() > 10)
			std::cout << last_name.substr(0,9).append(".") << "|";
		else
			std::cout << last_name << "|";
		std::cout << std::setw(10) <<std::right;
		if (nick_name.length() > 10)
			std::cout << nick_name.substr(0,9).append(".") << "|";
		else
			std::cout << nick_name << "|";
		std::cout << std::endl;
	}
}

void Contact::print_contact_details(void)
{
	std::cout << "First Name: " << first_name << std::endl;
	std::cout << "Last Name: " << last_name << std::endl;
	std::cout << "Nick Name: " << nick_name << std::endl;
	std::cout << "Phone number: " << phone_number << std::endl;
	std::cout << "Darkest Secret: " << darkest_secret << std::endl;
}
