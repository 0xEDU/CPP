/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:56:41 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 01:27:52 by edu              ###   ########.fr       */
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
		std::cout << c[0] << std::endl;
	} else {
		int converted = std::atoi(c.c_str());
		std::cout << static_cast<char>(converted) << std::endl;
	}
	return ;
}
