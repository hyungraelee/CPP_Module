/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:02:50 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/18 16:02:51 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2 || strcmp(argv[1], "") == 0) {
		std::cout << "Error : argument." << std::endl;
		return (-1);
	}
	ScalarConverter converter(argv[1]);
	std::cout << converter << std::endl;
	return (0);
}
