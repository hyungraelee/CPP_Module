/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:29:21 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/08 19:29:22 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "Address in memory of the string : " << &str << std::endl;
	std::cout << "Address of the string by using stringPTR : " << stringPTR << std::endl;
	std::cout << "Address of the string by using stringREF : " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Display the string using the pointer : " << *stringPTR << std::endl;
	std::cout << "Display the string using the reference : " << stringREF << std::endl;
	return (0);
}
