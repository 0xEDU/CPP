/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:55 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 13:22:43 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "formattedPrint.hpp"

ScalarConverter::ScalarConverter() {
	return ;
}

ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
	*this = rhs;
	return ;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
	(void) rhs;
	return *this;
}

ScalarConverter::~ScalarConverter() {
	return ;
}

void ScalarConverter::convert(char *input) {
	std::string str = input;

	// if (parse(input) == ERROR)
	// 	return ;
	formattedPrintChar(str);
	formattedPrintInt(str);
	formattedPrintFloat(str);
	formattedPrintDouble(str);
	return ;
}
