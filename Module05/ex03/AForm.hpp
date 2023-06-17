/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:57:29 by etachott          #+#    #+#             */
/*   Updated: 2023/06/17 18:31:47 by etachott         ###   ########.fr       */
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

	protected:
		std::string _target;

	public:
		class SignGradeTooHighException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class SignGradeTooLowException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class ExecGradeTooHighException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class ExecGradeTooLowException : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class FormIsNotSigned : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		class OpenFileFail : public std::exception {
			public:
				const char	*what(void) const throw();
		};

		AForm();
		AForm(const AForm &);
		AForm(
			const std::string name,
			const int minSignGrade,
			const int minExecGrade
		);
		AForm(
			const std::string name,
			const int minSignGrade,
			const int minExecGrade,
			std::string target
		);
		AForm &operator=(const AForm &);
		virtual ~AForm();

		bool			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat const & executor) const = 0;

		const std::string	&getName(void) const;
		bool				getIsSigned(void) const;
		const int			&getRequiredSignGrade(void) const;
		const int			&getRequiredExecuteGrade(void) const;
};

std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif // !FORM_HPP
