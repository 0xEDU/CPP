/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:56:41 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 13:27:08 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formattedPrint.hpp"

static bool isCharLiteral(std::string c) {
	char upper = 'A';
	char lower = 'a';

	for (int i = 0; i < 26; i++) {
		if (c[0] == upper++ || c[0] == lower++)
			return true;
	}
	return false;
}

void formattedPrintChar(std::string c) {
	std::cout << YELLOW << "char: " << END;
	if (isCharLiteral(c) == true) {
		std::cout << "\'" << c[0] << "\'" << std::endl;
	} else {
		int converted = std::atoi(c.c_str());

		std::cout << "\'" << static_cast<char>(converted) << "\'" << std::endl;
	}
	return ;
}

void formattedPrintInt(std::string c) {
	std::cout << YELLOW << "int: " << END;
	if (isCharLiteral(c) == true) {
		std::cout << static_cast<int>(c[0]) << std::endl;
	} else {
		int converted = std::atoi(c.c_str());

		std::cout << static_cast<int>(converted) << std::endl;
	}
}

void formattedPrintFloat(std::string c) {
	std::cout << YELLOW << "float: " << END;
	if (isCharLiteral(c) == true) {
		std::cout << static_cast<float>(c[0]) << ".0f" << std::endl;
	} else {
		float convertedFloat = std::atof(c.c_str());
		int convertedInt = std::atoi(c.c_str());

		if (convertedFloat == convertedInt)
			std::cout << static_cast<float>(convertedFloat) << ".0f" << std::endl;
		else
			std::cout << static_cast<float>(convertedFloat) << "f" << std::endl;
	}
}

void formattedPrintDouble(std::string c) {
	std::cout << YELLOW << "double: " << END;
	if (isCharLiteral(c) == true) {
		std::cout << static_cast<float>(c[0]) << ".0" << std::endl;
	} else {
		double convertedDouble = std::atof(c.c_str());
		int convertedInt = std::atoi(c.c_str());

		if (convertedDouble == convertedInt)
			std::cout << static_cast<double>(convertedDouble) << ".0" << std::endl;
		else
			std::cout << static_cast<double>(convertedDouble) << std::endl;
	}
}
