/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <etachott@student.42sp.org.br>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:44:28 by edu               #+#    #+#             */
/*   Updated: 2023/03/26 19:51:53 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

void	addContactToList(PhoneBook &phoneBook, int index)
{
	std::string fn;
	std::cout << "First name: ";
	getline(std::cin, fn);
	if (fn.empty())
		return ;
	std::string ln;
	std::cout << "Last name: ";
	getline(std::cin, ln);
	if (ln.empty())
		return ;
	std::string nn;
	std::cout << "Nickname: ";
	getline(std::cin, nn);
	if (nn.empty())
		return ;
	std::string pn;
	std::cout << "Phone number: ";
	getline(std::cin, pn);
	if (pn.empty())
		return ;
	std::string ds;
	std::cout << "Darkest secret: ";
	getline(std::cin, ds);
	if (ds.empty())
		return ;
	phoneBook.contactsList[index].setFirstName(fn);
	phoneBook.contactsList[index].setLastName(ln);
	phoneBook.contactsList[index].setNickName(nn);
	phoneBook.contactsList[index].setPhoneNumber(pn);
	phoneBook.contactsList[index].setDarkestSecret(ds);
}

void	displayContacts(PhoneBook &phoneBook)
{
	for (size_t i = 0; i < 8; i++)
	{
		std::cout << "---------------------" << std::endl;
		std::cout << i << "         |";
		std::cout << phoneBook.contactsList[i].getFirstName() << "|";
		std::cout << phoneBook.contactsList[i].getLastName() << std::endl;
		std::cout << phoneBook.contactsList[i].getNickName() << std::endl;
		std::cout << phoneBook.contactsList[i].getPhoneNumber() << std::endl;
		std::cout << phoneBook.contactsList[i].getDarkestSecret() << std::endl;
		std::cout << "---------------------" << std::endl;
	}
}

int main(void)
{
	PhoneBook	phoneBook = PhoneBook();
	int			index = 0;

	std::cout << "Your amazing PhoneBook!!" << std::endl;
	while (1)
	{
		std::string buffer;

		std::cout << "Please choose one:\nADD | SEARCH | EXIT" << std::endl;
		getline(std::cin, buffer);
		if (std::cin.eof())
			return (-1);
		if (buffer == "ADD")
		{
			if (index == 8)
				index = 0;
			addContactToList(phoneBook, index);
			index++;
		}
		else if (buffer == "SEARCH")
		{
			displayContacts(phoneBook);
		}
		else if (buffer == "EXIT")
		{
			std::cout << "breaking" << std::endl;
			break;
		}
	}
	return (0);
}
