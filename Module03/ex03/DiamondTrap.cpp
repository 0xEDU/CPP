/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:14:24 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 21:11:02 by etachott         ###   ########.fr       */
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

DiamondTrap::DiamondTrap(std::string name) {
	std::cout << "A DiamondTrap called " << name << " is born!!" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << this->_hitPoints << std::endl;
	std::cout << FragTrap::_hitPoints << std::endl;
	this->_energyPoints = ScavTrap::_energyPoints;
	std::cout << this->_energyPoints << std::endl;
	std::cout << ScavTrap::_energyPoints << std::endl;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << this->_attackDamage << std::endl;
	std::cout << FragTrap::_attackDamage << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) {
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
