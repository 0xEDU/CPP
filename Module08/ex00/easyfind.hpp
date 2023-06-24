/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:59:00 by etachott          #+#    #+#             */
/*   Updated: 2023/06/24 20:04:51 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &haystack, int needle) {
	typename T::iterator it =
		std::find(haystack.begin(), haystack.end(), needle);
	if (*it != needle)
		throw std::out_of_range("Value not found!");
	return it;
};

#endif // !EASYFIND_HPP
