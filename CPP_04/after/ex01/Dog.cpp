/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:49 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:50 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	this->brain = new Brain();
}

Dog::~Dog() {
	delete this->brain;
}

Dog::Dog(Dog const &other) : Animal(other) {
	this->brain = new Brain(*other.getBrain());
}

Dog &Dog::operator=(Dog const &other) {
	if (this != &other) {
		this->~Dog();
		this->brain = new Brain(*other.getBrain());
		this->Animal::operator=(other);
	}
	return (*this);
}

void Dog::makeSound() const {
	std::cout << "Bow-wow!!!" << std::endl;
}

Brain *Dog::getBrain() const {
	return this->brain;
}
