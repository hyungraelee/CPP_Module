/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 19:36:42 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 19:36:43 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
