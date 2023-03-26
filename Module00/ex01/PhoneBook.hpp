/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 20:42:12 by edu               #+#    #+#             */
/*   Updated: 2023/03/26 19:26:15 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contacts.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		PhoneBook(const PhoneBook &copy);
		PhoneBook &operator=(const PhoneBook &other);
		~PhoneBook();

		Contacts	contactsList[8];
};

#endif
