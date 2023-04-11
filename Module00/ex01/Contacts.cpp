/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <etachott@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:32:25 by edu               #+#    #+#             */
/*   Updated: 2023/04/11 15:25:47 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"
#include <iostream>
#include <string>

Contacts::Contacts(void)
{
	return ;
}

void	Contacts::setFirstName(std::string firstName)
{
	this->_firstName = firstName;
	return ;
}

void	Contacts::setLastName(std::string lastName)
{
	this->_lastName = lastName;
	return ;
}

void	Contacts::setNickName(std::string nickName)
{
	this->_nickName = nickName;
	return ;
}

void	Contacts::setPhoneNumber(std::string phoneNumber)
{
	this->_phoneNumber = phoneNumber;
	return ;
}

void	Contacts::setDarkestSecret(std::string darkestSecret)
{
	this->_darkestSecret = darkestSecret;
	return ;
}

std::string	Contacts::getFirstName(void)
{
	return this->_firstName;
}

std::string	Contacts::getLastName(void)
{
	return this->_lastName;
}

std::string	Contacts::getNickName(void)
{
	return this->_nickName;
}

std::string	Contacts::getPhoneNumber(void)
{
	return this->_phoneNumber;
}

std::string	Contacts::getDarkestSecret(void)
{
	return this->_darkestSecret;
}

Contacts::~Contacts()
{
	return ;
}
