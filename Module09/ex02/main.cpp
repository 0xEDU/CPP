/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:59 by etachott          #+#    #+#             */
/*   Updated: 2023/07/01 04:14:11 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
	try {
		PmergeMe::validateInput(argc, argv + 1);

		PmergeMe pme(argv);

		std::cout << "Before: " << pme.getVector() << std::endl;
		pme.vMergeInsertionSort();
		std::cout << "After: " << pme.getVector() << std::endl;
		// pme.lMergeInsertionSort();
		// std::cout << "After: " << pme.getVector() << std::endl;
		// std::cout << "Time to precess a range of " << pme.getSize()
		// 	<< " elements with std::vector : " << pme.getVectorTime() << " us"
		// 	<< std::endl;
		// std::cout << "Time to precess a range of " << pme.getSize()
		// 	<< " elements with std::list : " << pme.getListTime() << " us"
		// 	<< std::endl;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
