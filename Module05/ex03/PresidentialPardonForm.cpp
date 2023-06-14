/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:28:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/14 15:48:17 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: AForm("PresidentialPardonForm", 25, 5, target) {
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs)
	: AForm("PresidentialPardonForm", 25, 5, rhs._target) {
	*this = rhs;
	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	return ;
}

void PresidentialPardonForm::execute(const Bureaucrat & executor) const {
	AForm::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox"
		<< std::endl;
	return ;
}
