/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:14 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:15 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
	private :
		std::string		name;
		unsigned int	hitPoints;		// HP
		unsigned int	energyPoints;	// MP
		unsigned int	attackDamage;	// AD
	public :
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();
		ClapTrap(ClapTrap& c);
		ClapTrap& operator=(const ClapTrap& c);
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
