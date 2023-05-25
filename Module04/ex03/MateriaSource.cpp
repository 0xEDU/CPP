/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/25 14:25:35 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

int MateriaSource::_count = 0;

MateriaSource::MateriaSource() {
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &rhs) {
	*this = rhs;
	return ;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	this->_count = rhs._count;
	return *this;
}

MateriaSource::~MateriaSource() {
	if (this->_count > 0) {
		for (int i = 0 ; i < this->_count; i++) {
			delete this->_inventory[i];
		}
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *materia) {
	if (this->_count < 4)
		this->_inventory[this->_count++] = materia;
	else
		delete materia;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	return 0;
}
