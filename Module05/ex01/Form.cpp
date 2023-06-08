/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:11:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/07 21:03:52 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>
#include <ostream>

// 	private:
// 		const std::string	_name;
// 		bool				_isSigned;
// 		const int			_requiredSignGrade;
// 		const int			_requiredExecuteGrade;
//
//	DONE:
// 		Form();
// 		Form(const Form &);
// 		Form &operator=(const Form &);
// 		~Form();
//
// 		class GradeTooHighException : public std::exception {
// 			public:
// 				const char	*what(void) const throw();
// 		};
//
// 		class GradeTooLowException : public std::exception {
// 			public:
// 				const char	*what(void) const throw();
// 		};
//
// 	TODO:
//
// 	public:
// 		void	beSigned(Bureaucrat &signer);
//
// const std::string	&getName(void) const;
// bool				getIsSigned(void);
// const int			&getRequiredSignGrade(void) const;
// const int			&getRequiredExecuteGrade(void) const;
// };
//
// std::ostream &operator<<(std::ostream &o, const Form &rhs);

Form::Form()
	: _name(""),
	_isSigned(0),
	_requiredSignGrade(-1),
	_requiredExecuteGrade(-1) {
	return ;
}

Form::Form(const Form &rhs)
	: _name(rhs._name), 
	_isSigned(rhs._isSigned),
	_requiredSignGrade(rhs._requiredSignGrade),
	_requiredExecuteGrade(rhs._requiredExecuteGrade) {
	*this = rhs;
	return ;
}

Form::Form(const std::string name, const int minSignGrade, const int minExecGrade) 
	: _name(name),
	_requiredSignGrade(minSignGrade),
	_requiredExecuteGrade(minExecGrade) {
	if (minSignGrade > 150 || minExecGrade > 150)
		throw Form::GradeTooLowException();
	if (minSignGrade < 1 || minExecGrade < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form &Form::operator=(const Form &rhs) {
	const_cast<std::string&>(this->_name) = rhs.getName();
	const_cast<int&>(this->_requiredSignGrade) = rhs.getRequiredSignGrade();
	const_cast<int&>(this->_requiredExecuteGrade) = rhs.getRequiredExecuteGrade();
	this->_isSigned = rhs._isSigned;
	return *this;
}

Form::~Form() {
	return ;
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Oh no! Grade is too low!");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Oh no! Grade is too high!");
}

bool Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->_requiredSignGrade) {
		this->_isSigned = true;
		return (true);
	} else {
		throw Form::GradeTooLowException();
	}
	return (false);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
	o << "Name: " << rhs.getName() << std::endl
		<< "Is signed: " << rhs.getIsSigned() << std::endl
		<< "Minimum signing grade: " << rhs.getRequiredSignGrade() << std::endl
		<< "Minimum execution grade: " << rhs.getRequiredExecuteGrade() << std::endl;
	return (o);
}

const std::string &Form::getName(void) const {
	return (this->_name);
}

bool Form::getIsSigned(void) const {
	return (this->_isSigned);
}

const int &Form::getRequiredSignGrade(void) const {
	return (this->_requiredSignGrade);
}

const int &Form::getRequiredExecuteGrade(void) const {
	return (this->_requiredExecuteGrade);
}
