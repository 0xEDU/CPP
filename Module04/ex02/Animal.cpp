/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:57 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 14:36:25 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "An Animal " << ANIMAL << " was created" << std::endl;
	this->type = "";
	return ;
}

Animal::Animal (const Animal &rhs) {
	std::cout << "An Animal " << ANIMAL << " was copied" << std::endl;
	this->type = "";
	*this = rhs;
	return ;
}
Animal  &Animal::operator=(const Animal &rhs) {
	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "An Animal " << ANIMAL << " was destroyed" << std::endl;
	return ;
}

void	Animal::makeSound(void) const {
	std::cout << "" << std::endl;
	return ;
}

std::string	Animal::getType() const {
	return this->type;
}
