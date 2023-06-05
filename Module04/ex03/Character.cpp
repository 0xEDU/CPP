/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/06/05 19:30:40 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("") {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

Character::Character(const Character &rhs) {
	*this = rhs;
	return ;
}

Character &Character::operator=(const Character &rhs) {
	if (this != &rhs) {
		this->_name = rhs.getName();
		for (int i = 0; i < 4; i++) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
			if (rhs.getAMateria(i)) {
				this->_inventory[i] = rhs.getAMateria(i)->clone();
			}
		}
	}
	return *this;
}

Character::~Character() {
	for (int i = 0; i < 4; i++) {
		delete this->_inventory[i];
		this->_inventory[i] = NULL;
	}
	return ;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

AMateria *Character::getAMateria(int idx) const {
	if ((0 <= idx && idx <= 4) && this->_inventory[idx] != NULL) {
		return this->_inventory[idx];
	}
	return NULL;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return ;
		}
	}
	return ;
}

void Character::unequip(int idx) {
	if ((0 <= idx && idx <= 4) && this->_inventory[idx] != NULL) {
		this->_inventory[idx] = NULL;
		return ;
	}
	return ;
}

void Character::use(int idx, ICharacter &target) {
	if ((idx >= 0 && idx < 4) && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
	return ;
}
