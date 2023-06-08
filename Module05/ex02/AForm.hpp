/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:57:29 by etachott          #+#    #+#             */
/*   Updated: 2023/06/07 21:49:09 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <iostream>

class Bureaucrat;

class AForm {
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_requiredSignGrade;
		const int			_requiredExecuteGrade;

	public:
		class GradeTooHighException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		AForm();
		AForm(const AForm &);
		AForm(const std::string name,
			const int minSignGrade,
			const int minExecGrade);
		AForm &operator=(const AForm &);
		virtual ~AForm() = 0;

		bool	beSigned(Bureaucrat &b);

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		const int			&getRequiredSignGrade(void) const;
		const int			&getRequiredExecuteGrade(void) const;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif // !FORM_HPP
