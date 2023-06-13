/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/13 18:45:43 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void) {
	std::cout << YELLOW << "\n=== CREATING A ROBOTOMY REQUEST ==="
		<< END << std::endl;
	{
		Intern someRandomIntern;
		AForm *rrf;

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
	}
	return (0);
}
