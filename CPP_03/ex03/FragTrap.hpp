/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 14:25:13 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/17 14:25:14 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	FragTrap(FragTrap& c);
	FragTrap& operator=(const FragTrap& c);

	virtual void attack(std::string const & target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};

#endif
