/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:36:32 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:36:33 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

// class ICharacter;

class AMateria {

private :
	AMateria() {};

protected:
	std::string _type;
	unsigned int _xp;

public:

	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(AMateria const &);
	AMateria & operator=(AMateria const &);

	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter&);
};

#endif
