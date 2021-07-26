/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyunlee <hyunlee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 16:37:02 by hyunlee           #+#    #+#             */
/*   Updated: 2021/07/26 16:37:03 by hyunlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0 ; i < 4 ; i++) {
		materia[i] = NULL;
	}
}

MateriaSource::~MateriaSource() {
	for (int i = 0 ; i < 4 ; i++) {
		if (materia[i] != NULL) {
			delete materia[i];
		}
	}
}

MateriaSource::MateriaSource(const MateriaSource& orig) {
	for (int i = 0 ; i < 4 ; i++) {
		materia[i] = orig.materia[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& orig) {
	if (this != &orig) {
		this->~MateriaSource();
		for (int i = 0 ; i < 4 ; i++) {
			materia[i] = orig.materia[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0 ; i < 4 ; i++) {
		if (materia[i] == NULL) {
			materia[i] = m;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (type != "ice" && type != "cure")
		return (NULL);
	for (int i = 0 ; i < 4 ; i++) {
		if (materia[i] && materia[i]->getType() == type) {
			return (materia[i]->clone());
		}
	}
	return (NULL);
}
