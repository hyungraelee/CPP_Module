/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:25:15 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:25:16 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap	a("Hyunlee");
	DiamondTrap b;
	DiamondTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	c.guardGate();
	b.highFivesGuys();
	b.whoAmI();
}
