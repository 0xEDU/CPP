/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/13 19:28:19 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	return ;
}

Dog::Dog(const Dog &rhs) {
	*this = rhs;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {
	this->type = rhs.type;
	return *this;
}

Dog::~Dog() {
	return ;
}

void	Dog::makeSound() {
	std::cout << "WHOOF WHOOF" << std::endl;
	return ;
}

std::string	Dog::getType() {
	return this->type;
}
