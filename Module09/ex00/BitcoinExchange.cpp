/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 08:12:25 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 10:05:18 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
	: _dbMap(std::map<int, double>()),
	_inputMap(std::map<int, double>()) {
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
	: _dbMap(std::map<int, double>()),
	_inputMap(std::map<int, double>()) {
	*this = rhs;
	return ;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
	this->_dbMap = rhs._dbMap;
	this->_inputMap = rhs._inputMap;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {
	return ;
}

const char *BitcoinExchange::DatabaseNotFound::what() const throw() {
	return ("Error: Database not found!");
}

static const char *removeDash(std::string &str) {
	str.erase(
		std::remove(str.begin(), str.end(), '-'),
		str.end()
	);
	return (str.c_str());
}

void BitcoinExchange::loadDB(const std::string db) {
	std::ifstream input(db.c_str());
	std::string line;

	if (input.peek() == std::ifstream::traits_type::eof())
		throw DatabaseNotFound();
	while (std::getline(input, line)) {
		std::string date = line.substr(0, line.find(","));
		std::string value = line.substr(date.size() + 1, line.find(","));

		this->_dbMap.insert(
			std::make_pair(
				std::atoi(removeDash(date)),
				std::strtod(value.c_str(), NULL)
			)
		);
	}
	return ;
}
