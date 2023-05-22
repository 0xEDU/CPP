/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:24:52 by etachott          #+#    #+#             */
/*   Updated: 2023/05/22 15:40:54 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "A WrongCat " << WRONGCAT << " was created" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(rhs) {
	this->type = rhs.type;
	return ;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "A WrongCat " << WRONGCAT << " was destroyed" << std::endl;
	return ;
}

void	WrongCat::makeSound() const {
	std::cout << "MEOW?? MEOW??" << std::endl;
	return ;
}

std::string	WrongCat::getType() {
	return this->type;
}
