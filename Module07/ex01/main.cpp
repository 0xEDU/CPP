/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:56:16 by edu               #+#    #+#             */
/*   Updated: 2023/06/23 14:26:14 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "iter.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

int main(void) {
	std::cout << YELLOW << "=== PRINTING A INT ARRAY AS CONST ===" << END
		<< std::endl;
	{
		int arr[10];
		for (int i = 0; i < 10; i++)
			arr[i] = i;

		iter(arr, 10, elementPrint<const int>);
		std::cout << std::endl;
	}
	std::cout << YELLOW << "\n=== DOUBLING AN INT ARRAY ===" << END
		<< std::endl;
	{
		int arr[10];
		for (int i = 0; i < 10; i++)
			arr[i] = i;

		std::cout << "Original: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";

		iter(arr, 10, elementDouble<int>);
		std::cout << "\nModified: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	std::cout << YELLOW << "\n=== DOUBLING A CHAR ARRAY ===" << END
		<< std::endl;
	{
		char arr[10];
		for (int i = 0; i < 10; i++)
			arr[i] = 60;

		std::cout << "Original: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";

		iter(arr, 10, elementDouble<char>);
		std::cout << "\nModified: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	std::cout << YELLOW << "\n=== DOUBLING A FLOAT ARRAY ===" << END
		<< std::endl;
	{
		float arr[10];
		for (int i = 0; i < 10; i++) {
			arr[i] = i + 0.3;
		}

		std::cout << "Original: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";

		iter(arr, 10, elementDouble<float>);
		std::cout << "\nModified: ";
		for (int i = 0; i < 10; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	return 0;
}
