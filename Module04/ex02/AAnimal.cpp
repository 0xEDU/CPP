/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:57 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 17:37:11 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
	std::cout << "An AAnimal " << ANIMAL << " was created" << std::endl;
	this->type = "";
	return ;
}

AAnimal::AAnimal (const AAnimal &rhs) {
	std::cout << "An AAnimal " << ANIMAL << " was copied" << std::endl;
	this->type = "";
	*this = rhs;
	return ;
}
AAnimal  &AAnimal::operator=(const AAnimal &rhs) {
	this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal() {
	std::cout << "An AAnimal " << ANIMAL << " was destroyed" << std::endl;
	return ;
}

void	AAnimal::makeSound() const {
	std::cout << "" << std::endl;
	return ;
}

std::string	AAnimal::getType() const {
	return this->type;
}
