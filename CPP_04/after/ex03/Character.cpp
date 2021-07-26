/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:34 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:35 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) {
	this->_name = name;
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = NULL;
}

Character::~Character() {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
}

Character::Character(Character const & other) {
	this->_name = other._name;
	for (int i = 0; i < 4 ; i++)
	{
		if (other._inventory[i] != NULL)
			this->_inventory[i] = other._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
}

Character& Character::operator=(Character const & other) {
	if (this != &other) {
		this->~Character();
		this->_name = other._name;
		for (int i = 0; i < 4 ; i++)
		{
			if (other._inventory[i] != NULL)
				this->_inventory[i] = other._inventory[i]->clone();
			else
				this->_inventory[i] = NULL;
		}
	}
	return *this;
}

std::string const & Character::getName() const {
	return (this->_name);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		this->_inventory[idx] = NULL;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL) {
		this->_inventory[idx]->use(target);
	}
}
