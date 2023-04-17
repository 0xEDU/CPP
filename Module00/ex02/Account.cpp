/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:07:44 by edu               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/04/17 13:39:30 by etachott         ###   ########.fr       */
=======
/*   Updated: 2023/04/11 23:43:48 by edu              ###   ########.fr       */
>>>>>>> 6223994a882649bae1dcb0b9a4d9421703e832f0
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <locale>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp( void ) {
	std::time_t now = std::time(NULL);
	std::tm *localTime = std::localtime(&now);
	char buffer[17];
	std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", localTime);
	std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts()
				<< ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits()
				<< ";withdrawals:" << getNbWithdrawals()
				<< std::endl;
}

Account::Account( int initial_deposit ) {
	_displayTimestamp();
	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_totalAmount += this->_amount;
	std::cout << "index:" << _accountIndex
		<< ";amount:" << initial_deposit
		<< ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed" << std::endl;
}

int Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

<<<<<<< HEAD
int Account::getTotalAmount( void ) {
	return (_totalAmount);
}
=======
int	Account::getNbAccounts() {
	return (this->_nbAccounts);
}

void	Account::displayAccountsInfos() {
>>>>>>> 6223994a882649bae1dcb0b9a4d9421703e832f0

int Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}
int Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void	Account::makeDeposit(int deposit) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:";
	if (this->_amount < withdrawal) {
		std::cout << "refused\n";
		return (false);
	}
	std::cout << withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";amount:" << this->_amount
	<< ";nb_withdrawals:" << _nbWithdrawals
	<< std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}
