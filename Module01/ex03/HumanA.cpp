/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:15:19 by etachott          #+#    #+#             */
/*   Updated: 2023/04/20 15:38:20 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
	this->name = name;
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void	HumanA::attack(void) {
	std::cout <<
		this->name <<
		" attacks with their " <<
		this->weapon.getType() << std::endl;
	return ;
}
