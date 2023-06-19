/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:53:46 by edu               #+#    #+#             */
/*   Updated: 2023/06/18 23:57:03 by edu              ###   ########.fr       */
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
	std::cout << YELLOW << "=== CREATING AN ARRAY WITH n ELEMENTS ==="
		<< END << std::endl;
	{
		Array<char *> arr = Array<char *>(10);

		std::cout << "Size: " << arr.size() << std::endl;
	}
	return 0;
}
