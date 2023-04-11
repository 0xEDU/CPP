/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:42:12 by edu               #+#    #+#             */
/*   Updated: 2023/04/11 15:21:48 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		// PhoneBook(const PhoneBook &copy);
		// PhoneBook &operator=(const PhoneBook &other);
		~PhoneBook();

		Contacts	contactsList[8];
};

#endif
