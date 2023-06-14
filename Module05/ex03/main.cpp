/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/14 16:05:53 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	std::cout << YELLOW << "\n=== CREATING AN INVALID FORM ==="
		<< END << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat a("Hermes", 10);
		AForm *invf;

		try {
			invf = someRandomIntern.makeForm("invalid form", "Bender");
			a.signForm(*invf);
			invf->execute(a);
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		delete invf;
	}
	std::cout << YELLOW << "\n=== CREATING A ROBOTOMY REQUEST ==="
		<< END << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat a("Hermes", 10);
		AForm *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		a.signForm(*rrf);
		rrf->execute(a);

		delete rrf;
	}
	std::cout << YELLOW << "\n=== CREATING A PRESIDENTIAL PARDON ==="
		<< END << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat a("Hermes", 3);
		AForm *ppf;

		ppf = someRandomIntern.makeForm("presidential pardon", "Bender");
		a.signForm(*ppf);
		ppf->execute(a);

		delete ppf;
	}
	std::cout << YELLOW << "\n=== CREATING A SHRUBBERY CREATION ==="
		<< END << std::endl;
	{
		Intern someRandomIntern;
		Bureaucrat a("Hermes", 3);
		AForm *scf;

		scf = someRandomIntern.makeForm("shrubbery creation", "home");
		a.signForm(*scf);
		scf->execute(a);

		delete scf;
	}
	return (0);
}
