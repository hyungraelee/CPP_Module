#include "contact.hpp"

int add_contact(Contact &contact)
{
	if (contact.GetNum() < 8)
		contact.Add();
	else
		std::cout << "Sorry.... this phonebook is fxxking small :(" << std::endl;
	return (1);
}

int search_contact(Contact &contact)
{
	int key;

	contact.ShowTable();
	std::cout << "Please input index : ";
	std::cin >> key;
	std::cin.ignore();
	if (std::cin.fail())
	{
		std::cout << "Wrong format!!!" << std::endl;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	else
	{
		if (!(key >= 0 && key < contact.GetNum()))
			std::cout << "Out of range!!!" << std::endl;
		else
			contact.ShowAll(key);
	}
	return (1);
}

int main()
{
	Contact contact;
	std::string command;

	std::cout << "Welcome to Hyunlee's Awesome Phonebook!!! >_@" << std::endl;
	while (!std::cin.eof())
	{
		std::cout << "Command: ";
		std::getline(std::cin, command);
		if (command == "ADD" || command == "add")
			add_contact(contact);
		else if (command == "SEARCH" || command == "search")
			search_contact(contact);
		else if (command == "EXIT" || command == "exit")
			break;
	}
	return (0);
}
