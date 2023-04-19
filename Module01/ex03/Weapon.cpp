/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:42:14 by etachott          #+#    #+#             */
/*   Updated: 2023/04/19 15:45:37 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void) {
	return ;
}

Weapon::Weapon(const std::string type) {
	this->_type = type;
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

const std::string &Weapon::getType(void) {
	return (this->_type);
}

void	Weapon::setType(std::string type) {
	this->_type = type;
	return ;
}
