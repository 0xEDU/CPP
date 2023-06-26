/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 08:12:25 by etachott          #+#    #+#             */
/*   Updated: 2023/06/26 12:57:24 by etachott         ###   ########.fr       */
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

const char *BitcoinExchange::FileNotFound::what() const throw() {
	return ("Error: Input file not found!");
}

static std::string removeDash(std::string str) {
	str.erase(
		std::remove(str.begin(), str.end(), '-'),
		str.end()
	);
	std::string s = str;
	return (s);
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
				std::atoi(removeDash(date).c_str()),
				std::strtod(value.c_str(), NULL)
			)
		);
	}
	return ;
}

inline static bool isLeapYear(const int year) {
	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

inline static bool validateDate(std::string date) {
	int datetime = std::atoi(removeDash(date).c_str());
	int year = datetime / 10000,
		month = (datetime % 1000) / 100,
		day  = datetime % 100;

	if (1 > year || year > 9999)
		return false;
	if (1 > month || month > 12)
		return false;
	if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (1 > day || day > 30)
			return false;
	}
	if (month == 2) {
		if ((isLeapYear(year)) && (1 > day || day > 29))
			return false;
		if (!isLeapYear(year) && (1 > day || day > 28))
			return false;
	}
	if (1 > day || day > 31)
		return false;
	return true;
}

inline static bool validateValueAsString(std::string value, std::string line) {
	for (std::size_t i = 1; i < value.length(); i++) {
		if (!std::isdigit(value.at(i))) {
			if ((value.at(i) != '.' && value.at(i) != '-')
				|| (value.find_first_of('.') != value.find_last_of('.'))
				|| i == value.length() - 1) {
				std::cout << value << std::endl;
				std::cout << "Error: bad input => " << line << std::endl;
				return false;
			}
		}
	}
	return true;
}

inline static bool validateValueAsDouble(double value) {
	if (value < 0)
		std::cout << "Error: not a positive number." << std::endl;
	else if (value > 1000)
		std::cout << "Error: too large a number." << std::endl;
	else
		return true;
	return false;
}

void BitcoinExchange::calculatePrice(std::string date, double value) {
	std::map<int, double>::iterator it;
	int iDate = std::atoi(removeDash(date).c_str());

	it = this->_dbMap.upper_bound(iDate);
	it--;
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
	return ;
}

void BitcoinExchange::processFile(const std::string file) {
	std::ifstream input(file.c_str());
	std::string line;

	if (input.peek() == std::ifstream::traits_type::eof())
		throw FileNotFound();
	std::getline(input, line);
	while (std::getline(input, line)) {
		if (line.find(" | ") == std::string::npos) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		std::string date = line.substr(0, line.find(" | "));
		if (!validateDate(date)) {
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		std::string value = line.substr(date.size() + 2, line.find(" | "));
		double dValue = std::strtof(value.c_str(), NULL);
		if (validateValueAsString(value, line) && validateValueAsDouble(dValue))
			calculatePrice(date, dValue);
	}
}
