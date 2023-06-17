/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:23:54 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 18:36:53 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"

#include <iostream>
#include <stdexcept>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define END "\033[0m"

class AForm;

class Bureaucrat {
	private:
		const std::string	_name;
		int					_grade;
	
	public:
		class GradeTooHighException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		Bureaucrat();
		Bureaucrat(const Bureaucrat &);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(const Bureaucrat &);
		~Bureaucrat();

		void	incrementGrade(void);
		void	decrementGrade(void);
		void	signForm(const AForm &form);
		void	executeForm(AForm const & form);

		const std::string	&getName(void) const;
		int					getGrade(void) const;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);

#endif
