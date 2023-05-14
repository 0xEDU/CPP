/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:57 by edu               #+#    #+#             */
/*   Updated: 2023/05/14 16:44:24 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal constructor called" << std::endl;
	this->type = "";
	return ;
}

Animal::Animal (const Animal &rhs) {
	*this = rhs;
	return ;
}
Animal  &Animal::operator=(const Animal &rhs) {
	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const {
	std::cout << "" << std::endl;
	return ;
}

std::string	Animal::getType() const {
	return this->type;
}
