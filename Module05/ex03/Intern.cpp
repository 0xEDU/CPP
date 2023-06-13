/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:20:40 by etachott          #+#    #+#             */
/*   Updated: 2023/06/13 18:41:20 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"

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

static AForm *robotomyRequest(void) { return new RobotomyRequestForm(); }
static AForm *shrubberyCreation(void) { return new ShrubberyCreationForm(); }
static AForm *presidentialPardon(void) { return new PresidentialPardonForm(); }

AForm *Intern::makeForm(std::string name, std::string target) {
	std::string names[3] = {"robotomy request",
							"shrubbery creation",
							"presidential pardon"};
	AForm *(*funcs[3])() = {&robotomyRequest,
							&shrubberyCreation,
							&presidentialPardon};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name)
			return (funcs[i]());
	}
	std::cout << "EROR\nIntern failed to create " << name << std::endl;
	return (NULL);
}
