/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:50:09 by etachott          #+#    #+#             */
/*   Updated: 2023/04/20 20:20:10 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon = 0;
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
	return ;
}

void HumanB::attack(void) {
	std::cout <<
		this->name <<
		" attacks with their " <<
		this->weapon->getType() << std::endl;
	return ;
}
