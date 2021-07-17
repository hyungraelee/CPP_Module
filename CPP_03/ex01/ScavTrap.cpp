/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:34 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:35 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap " << "default constructor." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "ScavTrap " << name << " constructor." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << getName() << " destructor." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& c) {
	std::cout << "ScavTrap copy constructor." << std::endl;
	*this = c;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& c) {
	std::cout << "ScavTrap " << "assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	return (*this);
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "ScavTrap " << this->name << " took " << amount << " damages." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ScavTrap " << this->name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << getName() << " have enterred in Gate keeper mode." << std::endl;
}
