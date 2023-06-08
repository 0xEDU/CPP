/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:55:15 by edu               #+#    #+#             */
/*   Updated: 2023/06/07 21:37:56 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return *this;
};

Bureaucrat::~Bureaucrat() {
	return ;
}

void Bureaucrat::incrementGrade(void) {
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void Bureaucrat::decrementGrade(void) {
	this->_grade++;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException &e) {
		std::cout << this->_name << " couldn't sign " << form.getName()
			<< " because: " << e.what() << std::endl;
	}
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
