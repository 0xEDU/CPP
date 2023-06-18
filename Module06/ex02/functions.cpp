/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:35:49 by edu               #+#    #+#             */
/*   Updated: 2023/06/18 15:15:17 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base *generate(void) {
	std::srand(std::time(0));
	int randomValue = std::rand() % 3;

	switch (randomValue) {
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base *p) {
	std::stringstream type;
	type << "Pointer type is: ";

	if (dynamic_cast<A *>(p))
		type << "A" << std::endl;
	else if (dynamic_cast<B *>(p))
		type << "B" << std::endl;
	else if (dynamic_cast<C *>(p))
		type << "C" << std::endl;
	else {
		type.clear();
		type.str("");
		type << "Invalid pointer!" << std::endl;
	}
	std::cout << type.str();
	return ;
}

void identify(Base &p) {
	try {
		A a = dynamic_cast<A &>(p);

		std::cout << "Reference type is: A" << std::endl;
		return ;
	} catch (std::exception &e) {
		try {
			B b = dynamic_cast<B &>(p);

			std::cout << "Reference type is: B" << std::endl;
			return ;
		} catch(std::exception &e) {
			try {
				C c = dynamic_cast<C &>(p);

				std::cout << "Reference type is: C" << std::endl;
				return ;
			} catch (std::exception &e) {
				std::cerr << "Invalid reference!" << std::endl;
				return ;
			}
		}
	}
	return ;
}
