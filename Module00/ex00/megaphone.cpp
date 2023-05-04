/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:38:00 by edu               #+#    #+#             */
/*   Updated: 2023/05/04 20:01:46 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	convert_string(std::string &str) {
	for (int index = 0; str[index]; index++) {
		if (!isupper(str[index]))
			str[index] = (char)toupper(str[index]);
	}
}

int	main(int argc, char *argv[]) {
	std::string	str;

	if (argc == 1) {
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int index = 1; index < argc; index++) {
		str = argv[index];
		convert_string(str);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
