/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:31 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:32 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "Wrong Cat";
	std::cout << type << " is born" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy) {
	*this = copy;
}

WrongCat& WrongCat::operator=(const WrongCat& copy) {
	this->WrongAnimal::operator=(copy);
	return *this;
}

WrongCat::~WrongCat() {
}

void WrongCat::makeSound() const {
	std::cout << "Meow!!!" << std::endl;
}
