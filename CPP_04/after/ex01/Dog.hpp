/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:35:53 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:35:54 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

private:
	Brain *brain;

public:
	Dog();
	Dog(Dog const &);
	Dog &operator=(Dog const &);
	~Dog();
	void makeSound() const;
	Brain *getBrain() const;

};

#endif
