#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostrem>
#include <string>

class Contact
{
	private:
		bool found;
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	darkest_secret;
		std::string	phone_number;

	public:
		Contact(void);
		Contact(std::string	first_name, std::string	last_name, std::string	nick_name,
					std::string	darkest_secret, std::string	phone_number);
		void execute_commands(std::string cmd);
		void print_contact(int num);
		void print_contact_details(void);

}

class PhoneBook
{
	public:
		void add_contact(void);
		void display_contact(void);
		void search_contact(void);
		int	num;
		Contact arr[8];
}
#endif