/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:07:24 by etachott          #+#    #+#             */
/*   Updated: 2023/05/20 15:40:03 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.hpp"
#include "File.hpp"
#include <cstdlib>

static void	print_result(bool result, bool expected, const char *test) {
	if (result == expected) {
		std::cout << "[" << GREEN << "OK" << END << "]"
		<< " " << test << std::endl;
	} else {
		std::cout << "[" << RED << "KO" << END << "]"
		<< " " << test << std::endl;
		std::exit(-1);
	}
	return ;
}

static void	test_validation(void) {
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

static void	test_file_class(void) {
	File		file("infile", 'i');
	std::string	line;
	bool		result;

	std::cout << YELLOW << "==== FILE TESTS ====" << END << std::endl;
	result = file.istream.is_open();
	print_result(result, true, "File can be opened");
	result = file.istream.peek() == std::ifstream::traits_type::eof();
	print_result(result, false, "Empty file");
	return ;
}

static void test_multiple_replace(void) {
	std::string s1("pineapple strawberry watermelon fruit juice lemon");
	std::string s2("a");
	std::string s3("b");
	bool		result;

	std::cout << YELLOW <<
		"==== MULTIPLE OCCURENCES TESTS ====" << END << std::endl;
	while (s1.find(s2) != std::string::npos)
		str_replace(s1, s2, s3);
	result = s1 == ("pinebpple strbwberry wbtermelon fruit juice lemon");
	print_result(result, true, "One char replace");
	s1 = std::string("abcabcabc abc abc abc");
	s2 = std::string("abc");
	s3 = std::string("xyz");
	while (s1.find(s2) != std::string::npos)
		str_replace(s1, s2, s3);
	result = s1 == ("xyzxyzxyz xyz xyz xyz");
	print_result(result, true, "Multiple chars replace");
}

static void	test_str_replace(void) {
	std::string s1("avocado with banana");
	std::string s2("banana");
	std::string s3("chocolate");
	bool		result;

	std::cout << YELLOW << "==== STR_REPLACE TESTS ====" << END << std::endl;
	str_replace(s1, s2, s3);
	result = s1 == ("avocado with chocolate");
	print_result(result, true, "Basic replace");
	s1 = std::string("this is a relly long string for testing!");
	s2 = std::string("this is a relly long string");
	s3 = std::string("short string");
	str_replace(s1, s2, s3);
	result = s1 == ("short string for testing!");
	print_result(result, true, "Long string replace");
	return ;
}

int main (void) {
	{
		File testfile("infile", 'o');
		std::string sample("what is love?\nbaby don't hurt me\nno more");

		testfile.append(sample);
	}
	test_validation();
	test_file_class();
	test_str_replace();
	test_multiple_replace();
	return (0);
}
