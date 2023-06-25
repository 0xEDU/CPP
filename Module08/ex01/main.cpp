/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:20:18 by etachott          #+#    #+#             */
/*   Updated: 2023/06/24 23:30:26 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Span.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

int main() {
	std::cout << YELLOW << "=== CREATING AN EMPTY SPAN ==="
		<< END << std::endl;
	{
		try {
			Span sp = Span(10);

			sp.shortestSpan();
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
