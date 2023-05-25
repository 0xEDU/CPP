/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/25 13:45:14 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int MateriaSource::count = 0;

MateriaSource::MateriaSource() {
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &rhs) {
	*this = rhs;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	(void) rhs;
	return *this;
}

MateriaSource::~MateriaSource() {
	if (this->count > 0) {
		for (int i = 0 ; i < this->count; i++) {
			delete this->inventory[i];
		}
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (this->count < 4)
		this->inventory[this->count++] = materia;
	else
		delete materia;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	else
		return 0;
}
