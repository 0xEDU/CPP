/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 19:47:02 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() {
	return ;
}

Character::Character(const Character &rhs) {
	*this = rhs;
	return ;
}

Character &Character::operator=(const Character &rhs) {
	return *this;
}

Character::~Character() {
	return ;
}

Character::Character(std::string name) {
	return ;
}

std::string const &Character::getName() const {
	return this->getName();
}

void Character::equip(AMateria *m) {
	(void) m;
	return ;
}

void Character::unequip(int idx) {
	(void) idx;
	return ;
}

void Character::use(int idx, ICharacter &target) {
	(void) idx;
	(void) target;
	return ;
}
