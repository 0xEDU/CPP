/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:58:18 by etachott          #+#    #+#             */
/*   Updated: 2023/06/24 20:17:19 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <list>
#include <vector>
#include <algorithm>
#include <iostream>

#include "easyfind.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

int main(void) {
	std::cout << YELLOW << "=== FINDING AN ELEMENT INSIDE A VECTOR ==="
		<< END << std::endl;
	{
		try {
			std::vector<int> v;

			for (int i = 0; i < 5; i++) {
				v.push_back(i);
			}
			std::vector<int>::iterator it = easyfind(v, 3);
			std::cout << "Found " << *it << "!" << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << YELLOW << "\n=== COULDN'T FIND AN ELEMENT IN THE CONTAINER ==="
		<< END << std::endl;
	{
		try {
			std::list<int> l;

			for (int i = 0; i < 5; i++) {
				l.push_back(i);
			}
			std::list<int>::iterator it = easyfind(l, -1);
			std::cout << "Found " << *it << "!" << std::endl;
		} catch(std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	return (0);
}
