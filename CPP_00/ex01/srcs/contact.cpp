#include "contact.hpp"

Contact::Contact() {
	num = 0;
}

Contact::~Contact() {
}

int	Contact::GetNum() {
	return (num);
}

int	Contact::Add() {
	std::cout << "first name : ";
	std::getline(std::cin, firstname[num]);
	std::cout << "last name : ";
	std::getline(std::cin, lastname[num]);
	std::cout << "nickname : ";
	std::getline(std::cin, nickname[num]);
	std::cout << "login : ";
	std::getline(std::cin, login[num]);
	std::cout << "postal address : ";
	std::getline(std::cin, postal_address[num]);
	std::cout << "email address : ";
	std::getline(std::cin, email_address[num]);
	std::cout << "phone number : ";
	std::getline(std::cin, phone_number[num]);
	std::cout << "birthday date : ";
	std::getline(std::cin, birthday_date[num]);
	std::cout << "favorite meal : ";
	std::getline(std::cin, favorite_meal[num]);
	std::cout << "underwear color : ";
	std::getline(std::cin, underwear_color[num]);
	std::cout << "darkest secret : ";
	std::getline(std::cin, darkest_secret[num]);
	num++;
	return (0);
}

static void print_element(std::string name)
{
	int	len;

	len = name.length();
	if (len > 10)
		std::cout << std::setw(10) << name.substr(0, 9).append(".");
	else
		std::cout << std::setw(10) << name;
	std::cout << "|";
}

int	Contact::ShowTable() {
	std::cout << "=============================================" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "=============================================" << std::endl;
	for (int i = 0; i < num; i++)
	{
		std::cout << "|         " << i << "|";
		print_element(firstname[i]);
		print_element(lastname[i]);
		print_element(nickname[i]);
		std::cout << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	return (1);
}

int	Contact::ShowAll(int i) {
	std::cout << "first name : " << firstname[i] << std::endl;
	std::cout << "last name : " << lastname[i] << std::endl;
	std::cout << "nickname : " << nickname[i] << std::endl;
	std::cout << "login : " << login[i] << std::endl;
	std::cout << "postal address : " << postal_address[i] << std::endl;
	std::cout << "email address : " << email_address[i] << std::endl;
	std::cout << "phone number : " << phone_number[i] << std::endl;
	std::cout << "birthday date : " << birthday_date[i] << std::endl;
	std::cout << "favorite meal : " << favorite_meal[i] << std::endl;
	std::cout << "underwear color : " << underwear_color[i] << std::endl;
	std::cout << "darkest secret : " << darkest_secret[i] << std::endl;
	return (0);
}
