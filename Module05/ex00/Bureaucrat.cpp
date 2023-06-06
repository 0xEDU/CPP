/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:55:15 by edu               #+#    #+#             */
/*   Updated: 2023/06/06 09:52:46 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// DONE:
// 		Bureaucrat();
// 		Bureaucrat(const Bureaucrat &);
// 		Bureaucrat(std::string name, int grade);
// 		Bureaucrat &operator=(const Bureaucrat &);
// 		~Bureaucrat();
//
// 		const std::string	getName(void);
// 		int					getGrade(void);
//
// 		class GradeTooHighExcetpion : public std::exception {
// 			public:
// 				const char	*what(void) const throw();
// 		};
//
// 		class GradeTooLowException : public std::exception {
// 			public:
// 				const char	*what(void) const throw();
// 		};
//
// 		std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs);
// 		void	incrementGrade(void);
// 		void	decrementGrade(void);
//
// TODO:
//

Bureaucrat::Bureaucrat() : _name(""), _grade(-1) {
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) {
	*this = rhs;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name),
	_grade(grade) {
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
	const_cast<std::string&>(this->_name) = rhs.getName();
	this->_grade = rhs.getGrade();
	return *this;
};

Bureaucrat::~Bureaucrat() {
	return ;
}

void Bureaucrat::incrementGrade(void) {
	this->_grade++;
	return ;
}

void Bureaucrat::decrementGrade(void) {
	this->_grade--;
	return ;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
	return ("Too bad! Grade is too low!");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
	return ("Too bad! Grade is too high!");
}

const std::string &Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs) {
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}
