/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:19:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/08 02:21:50 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	std::cout << YELLOW << "=== CREATING A SHRUBBERY CREATION FORM ==="
		<< END << std::endl;
	{
		try {
			AForm *a = new ShrubberyCreationForm("home");
			Bureaucrat b("Hermes", 130);
			Bureaucrat c("Mercury", 130);

			b.signForm(*a);
			a->execute(c);

			delete a;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
