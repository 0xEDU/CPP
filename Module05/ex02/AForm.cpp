/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:11:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/17 18:42:47 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <iostream>
#include <ostream>

AForm::AForm()
	: _name(""),
	_isSigned(0),
	_requiredSignGrade(-1),
	_requiredExecuteGrade(-1),
	_target("") {
	return ;
}

AForm::AForm(const AForm &rhs)
	: _name(rhs._name), 
	_isSigned(rhs._isSigned),
	_requiredSignGrade(rhs._requiredSignGrade),
	_requiredExecuteGrade(rhs._requiredExecuteGrade) {
	*this = rhs;
	return ;
}

AForm::AForm(const std::string name, const int minSignGrade, const int minExecGrade) 
	: _name(name),
	_requiredSignGrade(minSignGrade),
	_requiredExecuteGrade(minExecGrade) {
	if (minSignGrade > 150)
		throw AForm::SignGradeTooLowException();
	if (minExecGrade > 150)
		throw AForm::ExecGradeTooLowException();
	if (minSignGrade < 1)
		throw AForm::SignGradeTooHighException();
	if (minExecGrade < 1)
		throw AForm::ExecGradeTooHighException();
	return ;
}

AForm::AForm(const std::string name,
			 const int minSignGrade,
			 const int minExecGrade,
			 std::string target)
	: _name(name),
	_requiredSignGrade(minSignGrade),
	_requiredExecuteGrade(minExecGrade),
	_target(target) {
	if (minSignGrade > 150)
		throw AForm::SignGradeTooLowException();
	if (minExecGrade > 150)
		throw AForm::ExecGradeTooLowException();
	if (minSignGrade < 1)
		throw AForm::SignGradeTooHighException();
	if (minExecGrade < 1)
		throw AForm::ExecGradeTooHighException();
	return ;
}

AForm &AForm::operator=(const AForm &rhs) {
	const_cast<std::string&>(this->_name) = rhs.getName();
	const_cast<int&>(this->_requiredSignGrade) = rhs.getRequiredSignGrade();
	const_cast<int&>(this->_requiredExecuteGrade) = rhs.getRequiredExecuteGrade();
	this->_isSigned = rhs._isSigned;
	return *this;
}

AForm::~AForm() {
	return ;
}

const char *AForm::SignGradeTooLowException::what() const throw() {
	return ("Oh no! Sign grade is too low!");
}

const char *AForm::SignGradeTooHighException::what() const throw() {
	return ("Oh no! Sign grade is too high!");
}

const char *AForm::ExecGradeTooLowException::what() const throw() {
	return ("Oh no! Exec grade is too low!");
}

const char *AForm::ExecGradeTooHighException::what() const throw() {
	return ("Oh no! Exec grade is too high!");
}

const char *AForm::FormIsNotSigned::what() const throw() {
	return ("This form is not signed!");
}

const char *AForm::OpenFileFail::what() const throw() {
	return ("ERROR: Failed to open file");
}

bool AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() <= this->_requiredSignGrade) {
		this->_isSigned = true;
		return (true);
	} else {
		throw AForm::SignGradeTooLowException();
	}
	return (false);
}

void AForm::execute(Bureaucrat const & executor) const {
	if (this->getIsSigned() != true)
		throw AForm::FormIsNotSigned();
	if (executor.getGrade() > this->getRequiredExecuteGrade())
		throw AForm::ExecGradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs) {
	o << "Name: " << rhs.getName() << std::endl
		<< "Is signed: " << rhs.getIsSigned() << std::endl
		<< "Minimum signing grade: " << rhs.getRequiredSignGrade() << std::endl
		<< "Minimum execution grade: " << rhs.getRequiredExecuteGrade() << std::endl;
	return (o);
}

const std::string &AForm::getName(void) const {
	return (this->_name);
}

bool AForm::getIsSigned(void) const {
	return (this->_isSigned);
}

const int &AForm::getRequiredSignGrade(void) const {
	return (this->_requiredSignGrade);
}

const int &AForm::getRequiredExecuteGrade(void) const {
	return (this->_requiredExecuteGrade);
}
