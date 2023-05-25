/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/25 14:44:45 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

int Character::_count = 0;

Character::Character() : _name("") {
	return ;
}

Character::Character(const Character &rhs) {
	*this = rhs;
	return ;
}

Character &Character::operator=(const Character &rhs) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = rhs._inventory[i];
	this->_name = rhs._name;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < this->_count; i++)
		delete this->_inventory[i];
	return ;
}

Character::Character(std::string name) : _name(name) {
	return ;
}

std::string const &Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria *m) {
	if (this->_count < 4)
		this->_inventory[this->_count++] = m;
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
