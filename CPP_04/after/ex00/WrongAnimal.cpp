/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:24 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:25 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	type = "Wrong Animal";
	std::cout << type << " is born" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy) {
	*this = copy;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& copy) {
	this->type = copy.getType();
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << type << " is dead" << std::endl;
}

std::string const & WrongAnimal::getType() const {
	return this->type;
}

void WrongAnimal::makeSound() const {
	std::cout << "Animal Animal!!!" << std::endl;
}
