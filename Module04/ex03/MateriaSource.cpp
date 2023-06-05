/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/06/05 19:37:01 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

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
	return *this;
}

MateriaSource::~MateriaSource() {
	for (int i = 0 ; i < 4; i++) {
		delete this->_inventory[i];
	}
	return ;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL &&)
	}
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	if (type == "ice")
		return new Ice();
	else if (type == "cure")
		return new Cure();
	return 0;
}
