/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:40:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/30 17:35:41 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << "ClapTrap default constructor called" << std::endl;
	this->_name = "";
	this->_type = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "ClapTrap called " << name << " is born!!" << std::endl;
	this->_name = name;
	this->_type = "ClapTrap";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &rhs) {
	*this = rhs;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs) {
	this->_name = rhs._name;
	this->_type = "ClapTrap";
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor called" << std::endl;
	return ;
}

void	ClapTrap::pretty_print(std::string action) {
	std::cout << this->_type << " " << this->_name << action << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints <= 0) {
		this->pretty_print(" is already gone!");
		return ;
	}
	if (this->_energyPoints <= 0) {
		this->pretty_print(" is out of energy!");
		return ;
	}
	std::cout << this->_type << " " << this->_name
				<< " attacks " << target << ", dealing "
				<< this->_attackDamage << " damage."
				<< std::endl;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		this->pretty_print(" is already gone!");
		return ;
	}
	std::cout << this->_type << " " << this->_name
				<< " takes " << amount << " damage! Ouch!"
				<< std::endl;
	this->_hitPoints -= amount;
	if (this->_hitPoints <= 0)
		this->pretty_print(" is destroyed!");
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints <= 0) {
		this->pretty_print(" is already gone!");
		return ;
	}
	if (this->_energyPoints <= 0) {
		this->pretty_print(" is out of energy!");
		return ;
	}
	std::cout << this->_type << " " << this->_name
				<< " is repaired by " << amount << " hit points."
				<< std::endl;
	this->_hitPoints += amount;
	this->_energyPoints--;
	return ;
}

void	ClapTrap::setName(std::string name) {
	this->_name = name;
	return ;
}

std::string ClapTrap::getName(void) {
	return (this->_name);
}

std::string ClapTrap::getName(void) const {
	return (this->_name);
}

void	ClapTrap::setType(std::string type) {
	this->_type = type;
	return ;
}

std::string ClapTrap::getType(void) {
	return (this->_type);
}

std::string ClapTrap::getType(void) const {
	return (this->_type);
}

void	ClapTrap::setHitPoints(int hp) {
	this->_hitPoints = hp;
	return ;
}

int	ClapTrap::getHitPoints(void) {
	return (this->_hitPoints);
}

int	ClapTrap::getHitPoints(void) const {
	return (this->_hitPoints);
}

void	ClapTrap::setAttackDamage(int ad) {
	this->_attackDamage = ad;
	return ;
}

int	ClapTrap::getAttackDamage(void) {
	return (this->_attackDamage);
}

int	ClapTrap::getAttackDamage(void) const {
	return (this->_attackDamage);
}

void	ClapTrap::setEnergyPoints(int ep) {
	this->_energyPoints = ep;
	return ;
}
int	ClapTrap::getEnergyPoints(void) {
	return (this->_energyPoints);
}

int	ClapTrap::getEnergyPoints(void) const {
	return (this->_energyPoints);
}
