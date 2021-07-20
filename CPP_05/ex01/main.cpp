#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat jaeskim("jaeskim", 3);
	Bureaucrat hyunlee("hyunlee", 1);
	Form form("CPP_05", 2, 5);

	std::cout << jaeskim << std::endl;
	std::cout << hyunlee << std::endl;
	std::cout << form << std::endl;

	jaeskim.signForm(form);
	std::cout << form << std::endl;
	hyunlee.signForm(form);
	std::cout << form << std::endl;

	return (0);
}
