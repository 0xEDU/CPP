/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:55 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 15:57:07 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "formattedPrint.hpp"
#include <cctype>

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

static bool isValidFloat(std::string str) {
	int dotCounter = 0;

	for (size_t i = 0; i < str.length() - 1; i++) {
		if (!std::isdigit(str[i]) && str[i] != '.')
			return false;
		if (str[i] == '.')
			dotCounter++;
	}
	if (dotCounter > 1)
		return false;
	if (str[str.length() - 1] == 'f' && std::isdigit(str[str.length() - 2]))
		return true;
	return false;
}

static bool isValid(std::string str) {
	for (size_t i = 0; i < str.length(); i++) {
		str[i] = std::tolower(str[i]);
	}
	if (str.length() == 1 || str == "nan" || str == "-inf" || str == "+inf"
		|| str == "-inff" || str == "+inff")
		return true;
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]) && str[i] != '.' && !isValidFloat(str)
				&& str[0] != '-')
			return false;
	}
	return true;
}

void ScalarConverter::convert(char *input) {
	std::string str = input;

	if (isValid(str) == false)
		return ;
	formattedPrintChar(str);
	formattedPrintInt(str);
	formattedPrintFloat(str);
	formattedPrintDouble(str);
	return ;
}
