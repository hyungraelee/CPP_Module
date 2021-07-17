/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:25:22 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:25:23 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public :
	ScavTrap();
	~ScavTrap();
	ScavTrap(ScavTrap& c);
	ScavTrap& operator=(const ScavTrap& c);
	ScavTrap(std::string name);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	void guardGate();
};

#endif
