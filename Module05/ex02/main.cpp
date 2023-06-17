/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 18:44:41 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	/* ShrubberyCreationForm tests */
	std::cout << RED << "==== SHRUBBERY CREATION FORM TESTS ===="
		<< END << std::endl;
	std::cout << YELLOW << "\n=== LOW GRADE TO SIGN FORM ==="
		<< END << std::endl;
	{
		AForm *a = new ShrubberyCreationForm("home");
		Bureaucrat b("Hermes", 150);

		b.signForm(*a); // Grade should be equal or higher than 147!
		b.executeForm(*a);

		delete a;
	}
	std::cout << YELLOW << "\n=== LOW GRADE TO EXECUTE FORM ==="
		<< END << std::endl;
	{
		AForm *a = new ShrubberyCreationForm("home");
		Bureaucrat b("Hermes", 140);

		b.signForm(*a);
		b.executeForm(*a); // Grade should be equal or higher than 137!

		delete a;
	}
	std::cout << YELLOW << "\n=== CREATING A SHRUBBERY CREATION FORM ==="
		<< END << std::endl;
	{
		AForm *a = new ShrubberyCreationForm("home");
		Bureaucrat b("Hermes", 130);
		Bureaucrat c("Mercury", 1);

		b.signForm(*a);
		b.executeForm(*a);

		delete a;
	}
	/* RobotomyRequestForm tests */
	std::cout << RED << "\n\n==== ROBOTOMY REQUEST FORM TESTS ===="
		<< END << std::endl;
	std::cout << YELLOW << "\n== LOW GRADE TO SIGN FORM ==="
		<< END << std::endl;
	{
		AForm *a = new RobotomyRequestForm("home");
		Bureaucrat b("Hermes", 73);

		b.signForm(*a); // Grade should be equal or higher than 72!
		b.executeForm(*a);

		delete a;
	}
	std::cout << YELLOW << "\n=== LOW GRADE TO EXECUTE FORM ===" 
		<< END << std::endl;
	{
		AForm *a = new RobotomyRequestForm("home");
		Bureaucrat b("Hermes", 48);

		b.signForm(*a);
		b.executeForm(*a); // Grade should be equal or higher than 45!

		delete a;
	}
	std::cout << YELLOW << "\n=== CREATING A ROBOTOMY REQUEST FORM ==="
		<< END << std::endl;
	{
		AForm *a = new RobotomyRequestForm("Arthur");
		Bureaucrat b("Hermes", 42);
		Bureaucrat c("Mercury", 5);

		b.signForm(*a);
		c.executeForm(*a);

		delete a;
	}
	/* PresidentialPardonForm tests */
	std::cout << RED << "\n\n==== PRESIDENTIAL PARDON FORM TESTS ===="
		<< END << std::endl;
	std::cout << YELLOW << "\n== LOW GRADE TO SIGN FORM ==="
		<< END << std::endl;
	{
		AForm *a = new PresidentialPardonForm("home");
		Bureaucrat b("Hermes", 25);

		b.signForm(*a); // Grade should be equal or higher than 25!
		b.executeForm(*a);

		delete a;
	}
	std::cout << YELLOW << "\n=== LOW GRADE TO EXECUTE FORM ===" 
		<< END << std::endl;
	{
		AForm *a = new PresidentialPardonForm("home");
		Bureaucrat b("Hermes", 6);

		b.signForm(*a);
		b.executeForm(*a); // Grade should be equal or higher than 5!

		delete a;
	}
	std::cout << YELLOW << "\n=== CREATING A ROBOTOMY REQUEST FORM ==="
		<< END << std::endl;
	{
		AForm *a = new PresidentialPardonForm("Bender");
		Bureaucrat b("Zaphod", 1);

		b.signForm(*a);
		b.executeForm(*a);

		delete a;
	}
	return (0);
}
