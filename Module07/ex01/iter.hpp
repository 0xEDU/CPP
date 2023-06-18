/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:47:06 by edu               #+#    #+#             */
/*   Updated: 2023/06/18 16:56:07 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>

template <typename T>
void iter(T *arrayAddr, size_t size, void (*f)(T &)) {
	for (size_t i = 0; i < size; i++) {
		f(arrayAddr[i]);
	}
};

template <typename T>
void elementDouble(T &element) {
	element *= 2;
};
#endif
