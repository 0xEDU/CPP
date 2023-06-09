/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:25:41 by etachott          #+#    #+#             */
/*   Updated: 2023/06/09 20:16:28 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
	: AForm("RobotomyRequestForm", 72, 45, target) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs) {
	*this = rhs;
	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs) {
	this->_target = rhs._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	return ;
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const {
	AForm::execute(executor);
	std::cout << " * some drilling noises * " << std::endl;

	std::srand(std::time(0));
	int random = std::rand();
	if (random % 2)
		std::cout << this->_target << " has been robotomized!"
			<< std::endl;
	else
		std::cout << "Failed to robotomize " << this->_target << std::endl;
}
