/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:55 by edu               #+#    #+#             */
/*   Updated: 2023/06/14 16:32:48 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
	*this = rhs;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	return *this;
}

ScalarConverter::~ScalarConverter() {
	return ;
}

void ScalarConverter::test() {
	std::cout << "oi\n";
	return ;
}
