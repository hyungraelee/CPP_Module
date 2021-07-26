/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:16 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:17 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

private:
	Brain *brain;

public:
	Cat();
	Cat(Cat const &);
	Cat &operator=(Cat const &);
	~Cat();
	void makeSound() const;
	Brain *getBrain() const;
};

#endif
