/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:16 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:17 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Hyunlee");
	ClapTrap b("Jaeskim");

	a.attack("Jaeskim");
	b.takeDamage(0);
	b.beRepaired(5);
	return (0);
}
