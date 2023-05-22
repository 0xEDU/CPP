/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/22 15:44:20 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << "A cat " << CAT << " was created" << std::endl;
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
	std::cout << "A cat " << CAT << " was destroyed" << std::endl;
	return ;
}

void	Cat::makeSound() const {
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}

std::string	Cat::getType() {
	return this->type;
}
