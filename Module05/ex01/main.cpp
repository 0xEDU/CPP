/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/06 20:02:05 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << YELLOW << "=== CREATING A FORM ===" << END << std::endl;
	std::cout << YELLOW << "\n=== BUREAUCRAT SIGNING A FORM ===" << END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 50);
			Form b("Visa", 100, 30);

			std::cout << a << std::endl;
			std::cout << "NAME = " << a.getName() << std::endl;
			std::cout << "GRADE = " << a.getGrade() << std::endl;
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what();
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what();
		}
	}
	std::cout << YELLOW << "\n=== LOW GRADE BUREAUCRAT ===" << END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 200);

			std::cout << a << std::endl;
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== HIGH GRADE BUREAUCRAT ===" << END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 0);

			std::cout << a << std::endl;
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== INCREMENT AND DECREMENT ===" << END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 100);

			std::cout << a << std::endl;
			std::cout << "ORIGINAL GRADE = " << a.getGrade() << std::endl;
			a.incrementGrade();
			std::cout << "INCREMENTED = " << a.getGrade() << std::endl;
			a.decrementGrade();
			std::cout << "DECREMENTED = " << a.getGrade() << std::endl;
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== OUT OF BOUNDS INCREMENT ==="
		<< END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 1);

			std::cout << a << std::endl;
			std::cout << "ORIGINAL GRADE = " << a.getGrade() << std::endl;
			std::cout << "CAUSING EXCEPTION BY INCREMENT..." << std::endl;
			a.incrementGrade();
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== OUT OF BOUNDS DECREMENT ==="
		<< END << std::endl;
	{
		try {
			Bureaucrat a("Hermes", 150);

			std::cout << a << std::endl;
			std::cout << "ORIGINAL GRADE = " << a.getGrade() << std::endl;
			std::cout << "CAUSING EXCEPTION BY DECREMENT..." << std::endl;
			a.decrementGrade();
		} catch (const Bureaucrat::GradeTooHighException &e) {
			std::cerr << e.what() << std::endl;
		} catch (const Bureaucrat::GradeTooLowException &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
