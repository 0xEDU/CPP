/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:56:41 by edu               #+#    #+#             */
/*   Updated: 2023/06/20 17:53:34 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "formattedPrint.hpp"

static bool isSpecialString(std::string c) {
	if (c == "nan" || c == "nanf"
		|| c == "-inf" || c == "+inf"
		|| c == "-inff" || c == "+inff")
		return true;
	return false;
}

void formattedPrintChar(std::string c) {
	std::cout << YELLOW << "char: " << END;
	if (isSpecialString(c)) {
		std::cout << "impossible" << std::endl;
		return ;
	}
	else if (!std::isprint(static_cast<char>(c[0])))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "\'" << c[0] << "\'" << std::endl;
	std::cout << YELLOW << "int: " << END
		<< static_cast<int>(c[0]) << std::endl;
	std::cout << YELLOW << "float: " << END
		<< static_cast<float>(c[0]) << ".0f" << std::endl;
	std::cout << YELLOW << "double: " << END << 
		static_cast<double>(c[0]) << ".0" << std::endl;
	return ;
}

void formattedPrintInt(std::string c) {
	int convertedInt = std::atoi(c.c_str());

	/* CHAR CONVERSION */
	std::cout << YELLOW << "char: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(convertedInt))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(convertedInt) << "\'"
			<< std::endl;

	/* INT CONVERSION */
	std::cout << YELLOW << "int: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << convertedInt << std::endl;

	/* FLOAT CONVERSION */
	std::cout << YELLOW << "float: " << END
		<< static_cast<float>(convertedInt) << ".0f" << std::endl;

	/* DOUBLE CONVERSION */
	std::cout << YELLOW << "double: " << END << 
		static_cast<double>(convertedInt) << ".0" << std::endl;
}

void formattedPrintFloat(std::string c) {
	float convertedFloat = std::strtof(c.c_str(), NULL);

	/* CHAR CONVERSION */
	std::cout << YELLOW << "char: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(convertedFloat))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(convertedFloat) << "\'"
			<< std::endl;

	/* INT CONVERSION */
	std::cout << YELLOW << "int: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(convertedFloat) << std::endl;

	/* FLOAT CONVERSION */
	float temp = convertedFloat;
	int decimalPlaces = 0;

	while (std::abs(temp - std::floor(temp)) > 0.0001) {
		temp *= 10.0;
		decimalPlaces++;
	}
	decimalPlaces == 0 ? decimalPlaces++ : decimalPlaces;
	std::cout << YELLOW << "float: " << END
		<< std::fixed << std::setprecision(decimalPlaces)
		<< static_cast<float>(convertedFloat) << "f" << std::endl;

	/* DOUBLE CONVERSION */
	std::cout << YELLOW << "double: " << END
		<< std::fixed << std::setprecision(decimalPlaces)
		<< static_cast<double>(convertedFloat) << std::endl;
}

void formattedPrintDouble(std::string c) {
	double convertedDouble = std::strtod(c.c_str(), NULL);

	/* CHAR CONVERSION */
	std::cout << YELLOW << "char: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(convertedDouble))
		std::cout << "non displayable" << std::endl;
	else
		std::cout << "\'" << static_cast<char>(convertedDouble) << "\'"
			<< std::endl;

	/* INT CONVERSION */
	std::cout << YELLOW << "int: " << END;
	if (isSpecialString(c))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(convertedDouble) << std::endl;

	/* FLOAT CONVERSION */
	float temp = convertedDouble;
	int decimalPlaces = 0;

	while (std::abs(temp - std::floor(temp)) > 0.0001) {
		temp *= 10.0;
		decimalPlaces++;
	}
	decimalPlaces == 0 ? decimalPlaces++ : decimalPlaces;
	std::cout << YELLOW << "float: " << END
		<< std::fixed << std::setprecision(decimalPlaces)
		<< static_cast<float>(convertedDouble) << "f" << std::endl;

	/* DOUBLE CONVERSION */
	std::cout << YELLOW << "double: " << END;
	std::cout << std::fixed << std::setprecision(decimalPlaces)
		<< static_cast<double>(convertedDouble) << std::endl;
}
