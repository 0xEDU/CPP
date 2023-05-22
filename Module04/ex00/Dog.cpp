/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/22 15:43:42 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "A dog " << DOG << " was created" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog &rhs) : Animal(rhs) {
	*this = rhs;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {
	this->type = rhs.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "A dog " << DOG << " was destroyed" << std::endl;
	return ;
}

void	Dog::makeSound() const {
	std::cout << "WHOOF WHOOF" << std::endl;
	return ;
}

std::string	Dog::getType() {
	return this->type;
}
