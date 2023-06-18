/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:58:05 by edu               #+#    #+#             */
/*   Updated: 2023/06/18 16:26:42 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
const T &min(const T a, const T b) {
	return (a >= b ? b : a);
}

template<typename T>
const T &max(const T a, const T b) {
	return (b >= a ? b : a);
}
#endif
