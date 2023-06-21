/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:53:46 by edu               #+#    #+#             */
/*   Updated: 2023/06/21 14:54:48 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

int main(void) {
	std::cout << YELLOW << "=== CREATING AN EMPTY ARRAY ==="
		<< END << std::endl;
	{
		Array<int> arr = Array<int>();

		std::cout << "Size: " << arr.size() << std::endl;
	}
	std::cout << YELLOW << "\n=== CREATING AN ARRAY WITH n ELEMENTS ==="
		<< END << std::endl;
	{
		Array<char *> arr = Array<char *>(10);

		std::cout << "Size: " << arr.size() << std::endl;
	}
	std::cout << YELLOW << "\n=== ACCESSING AN ELEMENT ==="
		<< END << std::endl;
	{
		Array<const char *> arr = Array<const char *>(1);
		arr[0] = "oi";

		std::cout << "arr[0]: " << arr[0] << std::endl;
	}
	std::cout << YELLOW << "\n=== TRYING TO ACCESS AN ELEMENT " \
		"OUT OF BOUNDS ===" << END << std::endl;
	{
		Array<std::string *> arr = Array<std::string *>(10);

		try {
			std::cout << "Arr[0]: " << arr[-1] << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		try {
			std::cout << "Arr[10]: " << arr[10] << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== COPYING AN ARRAY" << END << std::endl;
	{
		Array<double> arr = Array<double>(3);
		for (size_t i = 0; i < arr.size(); i++) {
			arr[i] = 2.1;
		}

		std::cout << "Original array: ";
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;

		Array<double> copy = arr;
		for (size_t i = 0; i < arr.size(); i++) {
			arr[i] *= 2;
		}
		std::cout << "Modified array: ";
		for (size_t i = 0; i < arr.size(); i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Copy of the original array: ";
		for (size_t i = 0; i < copy.size(); i++) {
			std::cout << copy[i] << " ";
		}
		std::cout << std::endl;
	}
	return 0;
}
