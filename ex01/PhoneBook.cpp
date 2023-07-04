#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : num(0) {}

void PhoneBook::add_contact(void)
{
	std::string firstname;
	std::string lastname;
	std::string nickname;
	std::string phonenumber;
	std::string darkestsecret;

	std::cout << "Enter First Name: " << std::endl;
	std::cin >> firstname;
	std::cout << "Enter Last Name: " << std::endl;
	std::cin >> lastname;
	std::cout << "Enter Nick Name: " << std::endl;
	std::cin >> nickname;
	std::cout << "Enter Phone Number: " << std::endl;
	std::cin >> phonenumber;
	std::cout << "Enter Darkest Secret: " << std::endl;
	std::cin >> darkestsecret;
	arr[num] = Contact(firstname, lastname, nickname, darkestsecret, phonenumber);
	num++;
	if (num == 8)
		num = 0;
}

void PhoneBook::display_contact(void)
{
	std::cout << "| INDEX | FIRST_NAME | LAST_NAME | NICK_NAME |" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		arr[i].print_contact(i);
	}
}

void PhoneBook::search_contact(void)
{
	std::string ContactID;
	int ContactId;
	bool ValidInput = true;
	display_contact();
	std::cout << "Choose a Contact" << std::endl;
	std::cin >> ContactID;
	for(int i = 0; ContactID.length(); i++)
	{
		if (!isdigit(ContactID[i]))
			ValidInput = false;
	}
	std::istringstream(ContactID) >> ContactId;
	if (!std::cin || ContactId < 0 || ContactId >= 8
		|| arr[ContactId].getfound() == false || ValidInput == false
			|| ContactID.length() == 0)
	{
		std::cout << "Invalid Contact" << std::endl;
	}
	else
		arr[ContactId].print_contact_details();
	std::cout << std::endl;
}