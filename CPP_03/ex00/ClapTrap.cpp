/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:11 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:12 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap " << "default constructor." << std::endl;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap " << name << " constructor." << std::endl;
	this->name = name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << name << " destructor." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& c) {
	std::cout << "ClapTrap copy constructor." << std::endl;
	*this = c;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& c) {
	std::cout << "ClapTrap " << "assignation overloading." << std::endl;
	this->name = c.name;
	this->hitPoints = c.hitPoints;
	this->energyPoints = c.energyPoints;
	this->attackDamage= c.attackDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hitPoints -= amount;
	std::cout << "ClapTrap " << name << " took " << amount << " damages." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap " << name << " is repaired " << amount << ". Repaired complete!" << std::endl;
}
