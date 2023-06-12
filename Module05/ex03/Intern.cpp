/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:20:40 by etachott          #+#    #+#             */
/*   Updated: 2023/06/12 16:46:56 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(const Intern &rhs) {
	*this = rhs;
	return ;
}

Intern &Intern::operator=(const Intern &rhs) {
	return *this;
}

Intern::~Intern() {
	return ;
}

static bool isValidName(std::string name) {
	std::string names[3] = {"robotomy request",
							"shrubbery creation",
							"presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name)
			return (true);
	}
	return (false);
}

AForm *Intern::makeForm(std::string name, std::string target) {
	if (isValidName(name)) {
		std::cout << "Intern creates " <<  name << std::endl;
		return (NULL);
	}
	std::cout << "EROR\nIntern failed to create " << name << std::endl;
	return (NULL);
}
