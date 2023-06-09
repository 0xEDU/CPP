/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/09 20:15:24 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	/* ShrubberyCreationForm tests */
	std::cout << RED << "==== SHRUBBERY CREATION FORM TESTS ===="
		<< END << std::endl;
	std::cout << YELLOW << "\n=== LOW GRADE TO SIGN FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new ShrubberyCreationForm("home");
			Bureaucrat b("Hermes", 150);

			b.signForm(*a); // Grade should be equal or higher than 147!
			a->execute(b);

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== LOW GRADE TO EXECUTE FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new ShrubberyCreationForm("home");
			Bureaucrat b("Hermes", 140);

			b.signForm(*a);
			a->execute(b); // Grade should be equal or higher than 137!

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== CREATING A SHRUBBERY CREATION FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new ShrubberyCreationForm("home");
			Bureaucrat b("Hermes", 130);
			Bureaucrat c("Mercury", 1);

			b.signForm(*a);
			a->execute(c);

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	/* RobotomyRequestForm tests */
	std::cout << RED << "\n\n==== ROBOTOMY REQUEST FORM TESTS ===="
		<< END << std::endl;
	std::cout << YELLOW << "\n== LOW GRADE TO SIGN FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new RobotomyRequestForm("home");
			Bureaucrat b("Hermes", 73);

			b.signForm(*a); // Grade should be equal or higher than 72!
			a->execute(b);

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== LOW GRADE TO EXECUTE FORM ===" 
		<< END << std::endl;
	{
		try {
			AForm *a = new RobotomyRequestForm("home");
			Bureaucrat b("Hermes", 48);

			b.signForm(*a);
			a->execute(b); // Grade should be equal or higher than 45!

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== CREATING A ROBOTOMY REQUEST FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new RobotomyRequestForm("Arthur");
			Bureaucrat b("Hermes", 42);
			Bureaucrat c("Mercury", 5);

			b.signForm(*a);
			a->execute(c);

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
