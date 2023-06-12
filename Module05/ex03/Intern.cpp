/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:20:40 by etachott          #+#    #+#             */
/*   Updated: 2023/06/12 16:20:54 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	return ;
}

Intern::Intern(const Intern &rhs) {
	*this = rhs;
	return ;
}

Intern &Intern::operator=(const Intern &rhs) {
	return *this;
}

Intern::~Intern() {
	return ;
}
