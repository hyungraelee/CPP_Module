/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:39:07 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:48:27 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	std::cout << std::endl;
}

int main()
{
	{
		srand(time(NULL));
		Bureaucrat hyunlee("hyunlee", 1);
		Bureaucrat wrong("wrong", 150);
		Intern intern;
		Form *form;
		try {
			form = intern.makeForm("ShrubberyCreation", "target");
			test_form(*form, hyunlee, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("RobotomyRequest", "target");
			test_form(*form, hyunlee, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("PresidentialPardon", "target");
			test_form(*form, hyunlee, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			form = intern.makeForm("WrongName", "target");
			test_form(*form, hyunlee, wrong);
			delete form;
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	system("leaks Bureaucrat");
	return 0;
}
