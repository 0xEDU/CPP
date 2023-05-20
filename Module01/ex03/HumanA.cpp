/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:15:19 by etachott          #+#    #+#             */
/*   Updated: 2023/05/20 14:38:06 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
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
