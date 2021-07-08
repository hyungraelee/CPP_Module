/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:29:15 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/08 19:29:16 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie {
	private :
		std::string	name;
	public :
		Zombie();
		Zombie(std::string);
		~Zombie();
		void	setName(std::string name);
		void	announce();
};

Zombie* zombieHorde(int N, std::string name);

#endif
