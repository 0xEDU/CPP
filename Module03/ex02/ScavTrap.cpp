/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:54:14 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 18:09:36 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	std::cout << "A ScavTrap is constructed!!" << std::endl;
	this->_name = "";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) {
	std::cout << "A ScavTrap called " << name << " is born!!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) {
	*this = rhs;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->_name << " is being dematerialized."
		<< std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is guarding the gate."
		<< std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " is already gone."
			<< std::endl;
		return ;
	}
	if (this->_energyPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " is out of energy."
			<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " hits " << target
				<< ", causing " << this->_attackDamage << " damage."
				<< std::endl;
	this->_energyPoints--;
	return ;
}
