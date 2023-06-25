/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 04:03:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 09:53:22 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include <map>
#include <cstdlib>
#include <utility>
#include <algorithm>

class BitcoinExchange {
	private:
		std::map<int, double> _dbMap;
		std::map<int, double> _inputMap;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &);
		BitcoinExchange &operator=(const BitcoinExchange &);
		~BitcoinExchange();

		class DatabaseNotFound : public std::exception {
			const char *what(void) const throw();
		};

		void	loadDB(const std::string db);
};

#endif // !BITCOINEXCHANGE_HPP
