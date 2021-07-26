/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:45 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:46 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") {
	this->brain = new Brain();
}

Cat::~Cat() {
	delete this->brain;
}

Cat::Cat(Cat const &other) : Animal(other) {
	this->brain = new Brain(*other.getBrain());
}

Cat &Cat::operator=(Cat const &other) {
	Brain *tmp;
	if (this != &other)
	{
		tmp = new Brain(*other.getBrain());
		this->~Cat();
		this->brain = tmp;
		this->Animal::operator=(other);
	}
	return (*this);
}

void Cat::makeSound() const {
	std::cout << "Meow!!" << std::endl;
}

Brain *Cat::getBrain() const {
	return this->brain;
}
