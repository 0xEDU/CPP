/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 23:34:26 by edu               #+#    #+#             */
/*   Updated: 2023/05/25 13:26:17 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {
	return ;
}

AMateria::~AMateria () {
	return ;
}

std::string const &AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter &target) {
	(void)target;
	return ;
}
