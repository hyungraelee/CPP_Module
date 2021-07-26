/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:30 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:31 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->_type = type;
}

AMateria::~AMateria() {
}

AMateria::AMateria(AMateria const & copy) {
	*this = copy;
}

AMateria& AMateria::operator=(AMateria const & copy) {
	this->_type = copy._type;
	this->_xp = copy._xp;
	return (*this);
}

std::string const & AMateria::getType() const {
	return this->_type;
}

unsigned int AMateria::getXP() const {
	return this->_xp;
}

void AMateria::use(ICharacter&) {
	_xp += 10;
}


