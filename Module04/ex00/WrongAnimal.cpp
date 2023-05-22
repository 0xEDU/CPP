/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:57 by edu               #+#    #+#             */
/*   Updated: 2023/05/22 12:55:01 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "";
	return ;
}

WrongAnimal::WrongAnimal (const WrongAnimal &rhs) {
	*this = rhs;
	return ;
}
WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &rhs) {
	this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "*wrong noises*" << std::endl;
	return ;
}

std::string	WrongAnimal::getType() const {
	return this->type;
}
