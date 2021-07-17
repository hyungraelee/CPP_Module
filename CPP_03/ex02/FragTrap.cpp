/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:44 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:45 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap " << "default constructor." << std::endl;
}

FragTrap::FragTrap(std::string name) {
	std::cout << "FragTrap " << name << " constructor." << std::endl;
	setName(name);
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << getName() << " destructor." << std::endl;
}

FragTrap::FragTrap(FragTrap& c) {
	std::cout << "FragTrap " << "copy constructor." << std::endl;
	*this = c;
}

FragTrap& FragTrap::operator=(const FragTrap& c) {
	std::cout << "FragTrap " << "assignation overloading." << std::endl;
	this->ClapTrap::operator=(c);
	return (*this);
}

void FragTrap::attack(std::string const & target) {
	std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "FragTrap " << this->name << " took " << amount << " damages." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "FragTrap " << this->name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this->name << " : ComeOn!!! ComeOn!!!! HighFive Guys~!" << std::endl;
}
