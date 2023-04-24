/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:07:24 by etachott          #+#    #+#             */
/*   Updated: 2023/04/23 20:39:47 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"
#include "File.hpp"

void	print_result(bool result, bool expected, const char *test) {
	if (result == expected) {
		std::cout << "[" << GREEN << "OK" << END << "]"
		<< " " << test << std::endl;
	} else {
		std::cout << "[" << RED << "KO" << END << "]"
		<< " " << test << std::endl;
	}
	return ;
}

void	test_validation(void) {
	const char	*mult_invalid[] = {"abc", "abc", "abc", NULL};
	const char	*file_invalid[] = {"sed", "random", "abc", "abc", NULL};
	const char	*valid[] = {"sed", "infile", "abc", "xyz", NULL};
	bool		result;

	std::cout << YELLOW << "==== INPUT VALIDATION TESTS ====" << END << std::endl;
	result = validate_file(3, (char **)mult_invalid);
	print_result(result, false, "Multiple invalid arguments");
	result = validate_file(4, (char **)file_invalid);
	print_result(result, false, "Invalid file");
	result = validate_file(4, (char **)valid);
	print_result(result, true, "Valid file");
	return ;
}

void	test_file_class(void) {
	File	file("infile");
	bool	result;

	std::cout << YELLOW << "==== FILE CLASS TESTS ====" << END << std::endl;
	result = file.stream.is_open();
	print_result(result, true, "File is open");
	return ;
}

int main (void) {
	test_validation();
	test_file_class();
	return (0);
}
