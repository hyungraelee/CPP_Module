/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 19:29:06 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/08 19:29:07 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie*	zombies;
	int		num = 5;

	zombies = zombieHorde(num, "hyunlee");
	for (int i = 0; i < num ; i++)
		zombies[i].announce();
	delete [] zombies;
	return (0);
}
