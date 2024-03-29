/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:31:04 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 19:45:32 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "A FragTrap is constructed!!" << std::endl;
	this->_name = "";
	this->_type = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "A wild FragTrap " << name << " appears!" << std::endl;
	this->_type = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs) {
	*this = rhs;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " pulverized."
		<< std::endl;
	return ;
}

void	FragTrap::highFiveGuys(void) {
	if (this->_hitPoints <= 0) {
		std::cout << this->_type << " " << this->_name << " is already gone."
			<< std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " wants to high five!"
		<< std::endl;
	return ;
}
