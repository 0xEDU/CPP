/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:13:42 by etachott          #+#    #+#             */
/*   Updated: 2023/06/18 13:56:46 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

#define YELLOW "\033[1;33m"
#define END "\033[0m"

struct Data {
	std::string	role;
	std::string	name;
	int			password;
};

#endif // !DATA_HPP
