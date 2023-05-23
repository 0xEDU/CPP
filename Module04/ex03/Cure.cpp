/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 20:14:53 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	this->type = "cure";
	return ;
}

Cure::Cure(const Cure &rhs) : AMateria("cure") {
	*this = rhs;
	return ;
}

Cure &Cure::operator=(const Cure &rhs) {
	(void) rhs;
	return *this;
}

Cure::~Cure() {
	return ;
}

Cure *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* shoots na ice bolt at " << target.getName() << std::endl;
	return ;
}
