/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/25 13:41:22 by etachott         ###   ########.fr       */
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
	if (this->count < 4) {
		this->inventory[this->count++] = materia;
		std::cout << "Add one" << std::endl;
	}
	else
		delete materia;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	(void)type;
	return new Ice(); // This will change in the future
}
