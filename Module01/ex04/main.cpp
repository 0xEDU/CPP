/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:05:31 by etachott          #+#    #+#             */
/*   Updated: 2023/04/24 15:23:43 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char *argv[]) {
	if (!validate_file(argc, argv))
		return (-1);

	File		infile(argv[1], 'i');
	File		outfile(std::string(argv[1]).append(".replace"), 'o');

	std::string	target(argv[2]);
	std::string	replacement(argv[3]);
	std::string	line;

	if (infile.istream.peek() == std::ifstream::traits_type::eof())
		return (-1);
	while (std::getline(infile.istream, line)) {
		if (line.find(target) == std::string::npos) {
			outfile.append(line);
			continue ;
		}
		str_replace(line, target, replacement);
		outfile.append(line);
	}
	return (0);
}
