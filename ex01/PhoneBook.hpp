#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <iomanip>

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
		//Contact &operator=(const Contact &contact);
		void print_contact(int num);
		void print_contact_details(void);
		bool getfound(void);

};

class PhoneBook
{
	private:
		void display_contact(void);
		int	num;
		Contact arr[8];
	public:
		PhoneBook(void);
		void add_contact(void);
		void search_contact(void);
};

#endif