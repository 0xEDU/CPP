/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:10:58 by etachott          #+#    #+#             */
/*   Updated: 2023/06/14 16:11:55 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm("ShrubberyCreationForm", 145, 137, target) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &rhs)
		: AForm("ShrubberyCreationForm", 145, 137, rhs._target) {
	*this = rhs;
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	return ;
}

void ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	AForm::execute(executor);
	std::string filename = this->_target + "_shrubbery";
	std::ofstream ostream(filename.c_str());
	if (ostream.fail())
		throw AForm::OpenFileFail();

	ostream << TREE ;
	ostream.close();
	return ;
}
