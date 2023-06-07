/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/07 20:46:04 by etachott         ###   ########.fr       */
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
	std::cout << YELLOW << "=== BUREAUCRAT SIGNING A FORM ===" << END << std::endl;
	{
		Bureaucrat a("Hermes", 50);
		Form b("Visa", 100, 30);

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
