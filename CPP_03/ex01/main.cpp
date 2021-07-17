/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:29 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:30 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("Hyunlee");
	ScavTrap b;
	ClapTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	b.guardGate();
	return (0);
}
