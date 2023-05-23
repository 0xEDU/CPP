/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 15:56:04 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() {
	std::cout << "A cat " << CAT << " was created" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat &rhs) : Animal(rhs) {
	std::cout << "A cat " << CAT << " was copied" << std::endl;
	*this = rhs;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs) {
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

Cat::~Cat() {
	std::cout << "A cat " << CAT << " was destroyed" << std::endl;
	delete this->brain;
	return ;
}

void	Cat::makeSound(void) const {
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}

std::string	Cat::getType() {
	return this->type;
}

void Cat::setIdea(int i, std::string idea) {
	this->brain->setIdea(i, idea);
}

std::string	Cat::getIdea(int i) {
	return this->brain->getIdea(i);
}
