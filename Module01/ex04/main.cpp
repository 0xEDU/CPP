/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:05:31 by etachott          #+#    #+#             */
/*   Updated: 2023/04/23 20:58:12 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <string>

int main (int argc, char *argv[]) {
	if (!validate_file(argc, argv))
		return (-1);
	File file(argv[1]);
	std::string line;
	std::string s1(argv[2]);
	while (std::getline(file.stream, line)) {
		std::cout << line.find(s1) << std::endl;
	}
	return (0);
}
