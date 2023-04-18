/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:46:01 by etachott          #+#    #+#             */
/*   Updated: 2023/04/12 19:06:31 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {
	return ;
}

Zombie::~Zombie(void) {
	std::cout << getName() << std::endl;
	return ;
}

std::string	Zombie::getName(void) {
	return (this->_name);
}

void	Zombie::setName(std::string name) {
	this->_name = name;
	return ;
}

void	Zombie::announce( void ) {
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
