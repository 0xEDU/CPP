/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:54:14 by etachott          #+#    #+#             */
/*   Updated: 2023/05/30 17:37:23 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
	std::cout << "A ScavTrap is constructed!!" << std::endl;
	this->setName("");
	this->setType("ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "A ScavTrap called " << name << " is born!!" << std::endl;
	this->setType("ScavTrap");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) {
	*this = rhs;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs) {
	this->setName(rhs.getName());
	this->setHitPoints(rhs.getHitPoints());
	this->setEnergyPoints(rhs.getEnergyPoints());
	this->setAttackDamage(rhs.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " << this->getName() << " is being dematerialized."
		<< std::endl;
	return ;
}

void	ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->getName() << " is guarding the gate."
		<< std::endl;
	return ;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->getHitPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " is already gone."
			<< std::endl;
		return ;
	}
	if (this->getEnergyPoints() <= 0) {
		std::cout << "ScavTrap " << this->getName() << " is out of energy."
			<< std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->getName() << " hits " << target
				<< ", causing " << this->getAttackDamage() << " damage."
				<< std::endl;
	this->setEnergyPoints(this->getEnergyPoints() - 1);
	return ;
}
