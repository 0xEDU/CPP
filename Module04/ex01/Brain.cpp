/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:15:33 by etachott          #+#    #+#             */
/*   Updated: 2023/05/22 16:23:51 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "A Brain " << BRAIN << " was created" << std::endl;
	return ;
}
Brain::Brain(const Brain &rhs) {
	*this = rhs;
	return ;
}
Brain &Brain::operator=(const Brain &rhs) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = rhs.ideas[i];
	return *this;
}
Brain::~Brain() {
	std::cout << "A Brain " << BRAIN << " was destroyed" << std::endl;
	return ;
}
