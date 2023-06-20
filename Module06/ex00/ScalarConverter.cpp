/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:30:55 by edu               #+#    #+#             */
/*   Updated: 2023/06/20 15:52:35 by etachott         ###   ########.fr       */
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
	if ((str[0] == '-' && str.length() == 1) || str[0] == '.')
		return false;
	if ((str.length() == 1 && std::isalpha(str[0]))
		|| str == "nan" || str == "nanf"
		|| str == "-inf" || str == "+inf"
		|| str == "-inff" || str == "+inff")
		return true;
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isdigit(str[i]) && !isValidFloat(str)
				&& str[0] != '-' && str[i] != '.')
			return false;
	}
	if (std::atol(str.c_str()) > std::numeric_limits<int>::max()
		|| std::atol(str.c_str()) < std::numeric_limits<int>::min())
		return false;
	return true;
}

static std::string getType(std::string str) {
	std::string type = "";

	if (str[str.length() - 1] == 'f' && str.size() > 1)
		return "float";
	if (str.size() == 1 && std::isalpha(str[0]))
		return "char";
	if (str.find('.') != std::string::npos)
		return "double";
	return "int";
}

void ScalarConverter::convert(char *input) {
	std::string str = input;
	std::string type = "";

	if (isValid(str) == false)
		return ;
	type = getType(str);
	std::cout << type << std::endl;
	formattedPrintChar(str);
	formattedPrintInt(str);
	formattedPrintFloat(str);
	formattedPrintDouble(str);
	return ;
}
