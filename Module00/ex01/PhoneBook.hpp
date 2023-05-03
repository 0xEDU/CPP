/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:42:12 by edu               #+#    #+#             */
/*   Updated: 2023/05/03 11:42:04 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contacts.hpp"
#include <cctype>
#include <iostream>
#include <string>

class	PhoneBook {
	public:
		PhoneBook();
		~PhoneBook();

		Contacts	contactsList[8];
};

#endif
