/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:29:57 by edu               #+#    #+#             */
/*   Updated: 2023/05/13 18:34:08 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	return ;
}

Animal::Animal (const Animal &rhs) {
	*this = rhs;
	return ;
}
Animal  &Animal::operator=(const Animal &rhs) {
	this->type = rhs.type;
	return *this;
}

Animal::~Animal(void) {
	return ;
}
