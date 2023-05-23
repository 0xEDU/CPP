/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:08:03 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 20:08:33 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() {
	this->type = "ice";
	return ;
}

Ice::Ice(const Ice &rhs) {
	*this = rhs;
	return ;
}

Ice &Ice::operator=(const Ice &rhs) {
	(void) rhs;
	return *this;
}

Ice::~Ice() {
	return ;
}

Ice *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots na ice bolt at " << target.getName() << std::endl;
	return ;
}
