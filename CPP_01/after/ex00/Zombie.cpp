/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:28:50 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/08 19:28:51 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie (){
}

Zombie::Zombie (std::string name){
	this->name = name;
}

Zombie::~Zombie (){
	std::cout << name << " is dead..." << std::endl;
}

void	Zombie::announce() {
	std::cout << '<' << name << '>' << " BraiiiiiiinnnzzzZ..." << std::endl;
}
