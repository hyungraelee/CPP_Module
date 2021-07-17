/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:49 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:50 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap a("Hyunlee");
	FragTrap b;
	FragTrap c("Jaeskim");

	b = a;
	b.attack(c.getName());
	c.takeDamage(b.getAttackDamage());
	c.beRepaired(c.getEnergyPoints());
	c.highFivesGuys();
	return (0);
}
