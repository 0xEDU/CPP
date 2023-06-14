/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:20:16 by etachott          #+#    #+#             */
/*   Updated: 2023/06/14 16:00:26 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
	public:
		class InvalidFormException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		Intern();
		Intern(const Intern &);
		Intern &operator=(const Intern &);
		~Intern();

		AForm	*makeForm(std::string name, std::string target);
};

#endif // !INTERN_HPP
