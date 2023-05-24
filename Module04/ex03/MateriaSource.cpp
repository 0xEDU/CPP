/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 23:39:28 by edu              ###   ########.fr       */
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
	(void) rhs;
	return *this;
}

MateriaSource::~MateriaSource() {
	return ;
}

void MateriaSource::learnMateria(AMateria *materia) {
	(void)materia;
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	(void)type;
	return new Ice(); // This will change in the future
}
