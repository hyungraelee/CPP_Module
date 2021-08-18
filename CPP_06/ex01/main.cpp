/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:03:02 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/18 16:03:03 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Data.hpp"

int main()
{
	uintptr_t	serialKey;
	{
		Data		orig;

		orig.iValue = 42;
		orig.iPtrVal = new int;
		*(orig.iPtrVal) = 420;
		orig.strValue = "seoul";
		orig.fValue = 42.42f;

		serialKey = serialize(&orig);
	}
	{
		Data*		dest;

		dest = deserialize(serialKey);

		std::cout << "dest - ivalue:\t\t" << dest->iValue << std::endl;
		std::cout << "dest - iPtrval:\t\t" << *(dest->iPtrVal) << std::endl;
		std::cout << "dest - strValue:\t" << dest->strValue << std::endl;
		std::cout << "dest - fvalue:\t\t" << dest->fValue << std::endl;
		delete dest->iPtrVal;
		delete dest;
	}
	system("leaks serialize");
	return (0);
}
