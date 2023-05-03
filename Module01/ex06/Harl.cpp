/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:34:07 by etachott          #+#    #+#             */
/*   Updated: 2023/05/03 10:52:33 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void	Harl::complain(std::string filter) {
	void		(Harl::*levels[4])(void) = {&Harl::debug, &Harl::info,
				&Harl::warning, &Harl::error};
	std::string	names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int			i = 0;
	int			flag = 0;

	for (; i < 4; i++) {
		if (filter == names[i]) {
			flag = 1;
			switch (i) {
				case 0:
					(this->*levels[i++])();
					std::cout << std::endl;
					// fallthrough
				case 1:
					(this->*levels[i++])();
					std::cout << std::endl;
					// fallthrough
				case 2:
					(this->*levels[i++])();
					std::cout << std::endl;
					// fallthrough
				case 3:
					(this->*levels[i++])();
					break ;
			}
		}
	}
	if (!flag)
		std::cout << "[ Probably complaining about insignificant problems ]"
		<< std::endl;
	return ;
}

void	Harl::debug( void ) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my"
	" 7XL-double-cheese-tripe-pickle-special-ketchup burger. I really do!\n";
	return ;
}

void	Harl::info( void ) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money."
	"You didn't put enough bacon in my burger! If you did, I wouldn't"
	"be asking for more!\n";
	return ;
}

void	Harl::warning( void ) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some exta bacon for free."
	" I've been coming for years whereas you started working here since"
	" last month.\n";
	return ;
}

void	Harl::error( void ) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now\n";
	return ;
}
