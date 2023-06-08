/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/07 21:10:04 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
	std::cout << YELLOW << "=== CREATING A FORM ===" << END << std::endl;
	{
		Form a("Affidavit", 100, 30);

		std::cout << a << std::endl;
	}
	std::cout << YELLOW << "=== CREATING A LOW GRADE FORM ==="
		<< END << std::endl;
	{
		try {
			Form a("Affidavit", 151, 30);

			std::cout << a << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== CREATING A HIGH GRADE FORM ==="
		<< END << std::endl;
	{
		try {
			Form a("Affidavit", 0, 30);

			std::cout << a << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== BUREAUCRAT SIGNING A FORM ===" << END << std::endl;
	{
		Bureaucrat a("Hermes", 50);
		Form b("Visa", 100, 30);

		std::cout << RED << "Bureaucrat: " << END << a << std::endl;
		std::cout << RED << "Form: " << END << b << std::endl;
		a.signForm(b);
	}
	std::cout << YELLOW << "\n=== LOW GRADE BUREAUCRAT TRIES TO SIGN A FORM ===" << END << std::endl;
	{
		Bureaucrat a("Hermes", 150);
		Form b("Visa", 100, 30);

		a.signForm(b);
	}
	return (0);
}
