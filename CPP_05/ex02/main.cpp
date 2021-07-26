/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:37:01 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:49:59 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

void do_beSigned(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << form << std::endl;
	}
}

void do_action(Form &form, Bureaucrat &bureaucrat)
{
	try
	{
		std::cout << form << std::endl;
		bureaucrat.executeForm(form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void test_form(Form &form, Bureaucrat &correct, Bureaucrat &wrong)
{
	std::cout << "\ntry beSigned by wrong" << std::endl;
	do_beSigned(form, wrong);
	std::cout << "\ntry action with not signed form" << std::endl;
	do_action(form, correct);
	std::cout << "\ntry beSigned by correct" << std::endl;
	do_beSigned(form, correct);
	std::cout << "\ntry action with signed form by wrong" << std::endl;
	do_action(form, wrong);
	std::cout << "\ntry action with signed form by correct" << std::endl;
	do_action(form, correct);
}

int main()
{
	{
		srand(time(NULL));
		Bureaucrat hyunlee("hyunlee", 1);
		Bureaucrat wrong("wrong", 150);
		ShrubberyCreationForm form1("target");
		RobotomyRequestForm form2("target");
		PresidentialPardonForm form3("target");
		test_form(form1, hyunlee, wrong);
		test_form(form2, hyunlee, wrong);
		test_form(form3, hyunlee, wrong);
	}
	system("leaks Bureaucrat");
	return 0;
}
