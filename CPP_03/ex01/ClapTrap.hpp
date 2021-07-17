/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:24:27 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:24:28 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

protected :

	std::string		name;
	unsigned int	hitPoints;		// HP
	unsigned int	energyPoints;	// MP
	unsigned int	attackDamage;	// AD

public :

	ClapTrap();
	~ClapTrap();
	ClapTrap(ClapTrap& c);
	ClapTrap& operator=(const ClapTrap& c);
	ClapTrap(std::string name);


	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	void setName(std::string name);
	void setHitPoints(unsigned int amount);
	void setEnergyPoints(unsigned int amount);
	void setAttackDamage(unsigned int amount);
	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
};

#endif
