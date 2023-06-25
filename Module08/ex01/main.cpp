/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:20:18 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 01:28:02 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

std::ostream &operator<<(std::ostream &o, const Span sp) {
	for (t_capacity i = 0; i < sp.getCurrentCapacity(); i++) {
		o << sp.at(i) << " ";
	}
	return o;
}

int main() {
	std::cout << YELLOW << "=== CREATING AN EMPTY SPAN ==="
		<< END << std::endl;
	{
		Span sp = Span(0);

		std::cout << "Size: " << sp.getCurrentCapacity() << std::endl;
	}
	std::cout << YELLOW << "\n=== FILLING A SPAN ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(10);

			std::cout << "Size before adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
			for (int i = 0; i < 10; i++) {
				sp.addNumber(i);
			}
			std::cout << "Size after adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
			std::cout << "Span content: " << sp << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== GOING OVER THE SPAN CAPACITY " \
		"ADDING ONE NUMBER AT A TIME ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(5);

			for (int i = 0; i < 10; i++) {
				std::cout << "Adding: " << i << std::endl;
				sp.addNumber(i);
			}
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== FILLING THE SPAN WITH ONE FUNCTION CALL ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(10000);
			std::vector<int> v(10000, 42);

			std::cout << "Size before adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
			sp.addNumbers(v.begin(), v.end());
			std::cout << "Size after adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== GOING OVER THE SPAN CAPACITY " \
		"WITH ONE FUNCTION CALL ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(10000);
			std::vector<int> v(20000, 42);

			std::cout << "Size before adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
			sp.addNumbers(v.begin(), v.end());
			std::cout << "Size after adding multiple numbers: " <<
				sp.getCurrentCapacity() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== FINDING THE SHORTEST SPAN ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(25000);
			std::vector<int> v(24999, 42);

			sp.addNumbers(v.begin(), v.end());
			sp.addNumber(32);
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== INVALID SHORTEST SPAN ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(25000);

			sp.addNumber(32);
			std::cout << sp.shortestSpan() << std::endl;
		} catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	// std::cout << YELLOW << "=== SUBJECT TESTS ===" << END << std::endl;
	// {
	// 	Span sp = Span(5);
	//
	// 	sp.addNumber(6);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	//
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// }
	return 0;
}
