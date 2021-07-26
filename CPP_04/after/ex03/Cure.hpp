/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:41 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:42 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public :
	Cure() : AMateria("cure") {}
	virtual ~Cure() {}
	Cure(const Cure& orig);
	Cure& operator=(const Cure&);

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
