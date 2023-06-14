/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:20:40 by etachott          #+#    #+#             */
/*   Updated: 2023/06/14 16:04:36 by edu              ###   ########.fr       */
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
	(void) rhs;
	return *this;
}

Intern::~Intern() {
	return ;
}

const char *Intern::InvalidFormException::what() const throw() {
	return ("ERROR\nInvalid form request!");
}

static AForm *robotomyRequest(std::string target) {
	return new RobotomyRequestForm(target);
}

static AForm *shrubberyCreation(std::string target) {
	return new ShrubberyCreationForm(target);
}

static AForm *presidentialPardon(std::string target) {
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target) {
	std::string names[3] = {"robotomy request",
							"shrubbery creation",
							"presidential pardon"};
	AForm *(*funcs[3])(std::string target) = {  &robotomyRequest,
												&shrubberyCreation,
												&presidentialPardon};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name)
			return (funcs[i](target));
	}
	throw Intern::InvalidFormException();
	return (NULL);
}
