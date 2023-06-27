/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:12:59 by etachott          #+#    #+#             */
/*   Updated: 2023/06/27 16:45:35 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
	try {
		PmergeMe::validateInput(argc, argv + 1);

		PmergeMe pme(argv);

		std::cout << pme.getVector() << std::endl;
		std::cout << pme.getList() << std::endl;
		// pme.vMergeInsertionSort();
		// pme.lMergeInsertionSort();
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
