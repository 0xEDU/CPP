/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/25 14:19:38 by etachott         ###   ########.fr       */
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
	for (int i = 0; i < 4; i++)
		this->inventory[i] = rhs.inventory[i];
	this->count = rhs.count;
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
