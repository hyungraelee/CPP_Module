/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:36 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:37 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Some animal";
	std::cout << "Some animal born." << std::endl;
}

Animal::Animal(std::string type) {
	this->type = type;
	std::cout << this->type << " born." << std::endl;
}

Animal::~Animal() {
	std::cout << this->type << " dead..." << std::endl;
}

Animal::Animal(const Animal& other) {
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	this->type = other.getType();
	return (*this);
}

std::string const & Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Animal Animal!!!" << std::endl;
}

