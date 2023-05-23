/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:22:24 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 16:03:33 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << "A dog " << DOG << " was created" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(const Dog &rhs) : Animal(rhs) {
	std::cout << "A dog " << DOG << " was copied" << std::endl;
	*this = rhs;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs) {
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return *this;
}

Dog::~Dog() {
	std::cout << "A dog " << DOG << " was destroyed" << std::endl;
	delete this->brain;
	return ;
}

void	Dog::makeSound() const {
	std::cout << "WHOOF WHOOF" << std::endl;
	return ;
}

std::string	Dog::getType() {
	return this->type;
}

void	Dog::setIdea(int i, std::string idea) {
	this->brain->setIdea(i, idea);
	return ;
}

std::string Dog::getIdea(int i) {
	return this->brain->getIdea(i);
}
