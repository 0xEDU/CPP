/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 08:12:25 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 08:25:13 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
	: _dbMap(std::map<int, int>()),
	_inputMap(std::map<int, int>()) {
	return ;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
	: _dbMap(std::map<int, int>()),
	_inputMap(std::map<int, int>()) {
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
