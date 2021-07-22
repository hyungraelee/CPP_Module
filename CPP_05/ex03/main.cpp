#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	wrong.signForm(form);
	correct.executeForm(form);
	correct.signForm(form);
	wrong.executeForm(form);
	correct.executeForm(form);
}

int main()
{
	srand(time(NULL));
	Bureaucrat jaeskim("hyunlee", 1);
	Bureaucrat wrong("wrong", 150);
	Intern intern;
	Form *form;
	try {
		form = intern.makeForm("ShrubberyCreation", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = intern.makeForm("RobotomyRequest", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = intern.makeForm("PresidentialPardon", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		form = intern.makeForm("WrongName", "target");
		test_form(*form, jaeskim, wrong);
		delete form;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
