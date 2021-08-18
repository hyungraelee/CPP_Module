/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 16:03:13 by hyunlee           #+#    #+#             */
/*   Updated: 2021/08/18 16:03:14 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"

int main()
{
	{
		srand(time(NULL));

		Base* randBase = generate();
		identify(randBase);
		identify(*randBase);
		delete randBase;
	}
	system("leaks realtype");
	return (0);
}
