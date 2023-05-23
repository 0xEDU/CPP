/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:15:33 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 15:49:17 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "A Brain " << BRAIN << " was created" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = std::string("FOOD");
	return ;
}

Brain::Brain(const Brain &rhs) {
	std::cout << "A Brain " << BRAIN << " was copied" << std::endl;
	*this = rhs;
	return ;
}

Brain &Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}

Brain::~Brain() {
	std::cout << "A Brain " << BRAIN << " was destroyed" << std::endl;
	return ;
}

std::string Brain::getIdea(int i) const {
	return this->ideas[i];
}

void Brain::setIdea(int i, std::string idea) {
	this->ideas[i] = idea;
	return ;
}

std::ostream &operator<<(std::ostream &o, Brain const &brain) {
	for (int i = 0; i < 100; i++) {
		o << brain.getIdea(i) << "\n";
	}
	return (o);
}
