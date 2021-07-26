/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:48 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:49 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public :
	Ice() : AMateria("ice") {}
	virtual ~Ice() {}
	Ice(const Ice& orig);
	Ice& operator=(const Ice& orig);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
