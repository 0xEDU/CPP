/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 04:01:54 by etachott          #+#    #+#             */
/*   Updated: 2023/06/26 12:26:40 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[]) {
	if (argc != 2) {
		std::cout << "Usage: ./btc [file]" << std::endl;
		return (1);
	}
	try {
		BitcoinExchange btc;

		btc.loadDB("data.csv");
		btc.processFile(argv[1]);
	} catch(std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
