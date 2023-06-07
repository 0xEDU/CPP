/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:57:29 by etachott          #+#    #+#             */
/*   Updated: 2023/06/06 18:28:47 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
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

		Form();
		Form(const Form &);
		Form(const std::string name,
			const int minSignGrade,
			const int minExecGrade);
		Form &operator=(const Form &);
		~Form();

		void	beSigned(Bureaucrat &signer);

		const std::string	&getName(void) const;
		bool				getIsSigned(void);
		const int			&getRequiredSignGrade(void) const;
		const int			&getRequiredExecuteGrade(void) const;
};

std::ostream &operator<<(std::ostream &o, const Form &rhs);

#endif // !FORM_HPP
