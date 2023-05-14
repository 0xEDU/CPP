/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/14 16:43:28 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat created" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(const Cat &rhs) : Animal(rhs) {
	*this = rhs;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {
	this->type = rhs.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat destroyed" << std::endl;
	return ;
}

void	Cat::makeSound() const {
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}

std::string	Cat::getType() {
	return this->type;
}
