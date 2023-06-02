/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:14:24 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 19:52:01 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "A DiamondTrap is constructed!!" << std::endl;
	this->_name = "";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
											 FragTrap(name + "_clap_name"),
											 ScavTrap(name + "_clap_name"),
											 _name(name) {
	std::cout << "A DiamondTrap called " << name << " is born!!" << std::endl;
	this->_type = "DiamondTrap";
	this->_hitPoints = FragTrap::HIT_POINTS;
	this->_energyPoints = ScavTrap::ENERGY_POINTS;
	this->_attackDamage = FragTrap::ATTACK_DAMAGE;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(),
												   FragTrap(),
												   ScavTrap() {
	*this = rhs;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << this->_name << " has ceased existing."
		<< std::endl;
	return ;
}

// void	DiamondTrap::whoAmI(void) {
// }
