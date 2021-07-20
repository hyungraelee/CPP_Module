#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat *input_info()
{
	std::string name;
	int grade;

	try
	{
		std::cout << "name : ";
		std::cin >> name;
		std::cout << "grade : ";
		std::cin >> grade;
		return new Bureaucrat(name, grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return input_info();
	}
}

int main()
{
	Bureaucrat *b = input_info();

	std::cout << *b << std::endl;
	try {
		b->incrementGrade(3);
		std::cout << *b << std::endl;
		b->incrementGrade(3);
		std::cout << *b << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	delete b;
	return (0);
}
