/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:40:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/09 18:49:17 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) {
	*this = rhs;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	return ;
}

ClapTrap::~ClapTrap() {
	return ;
}
