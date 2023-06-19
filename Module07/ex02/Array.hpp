/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:46:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/19 01:10:50 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

typedef unsigned int t_size;

template <typename T>
class Array {
	private:
		t_size	_size;
		T		*_content;

	public:
		/* CANONICAL FORM ================================================== */
		Array() : _size(0), _content(new T[0]) {};

		Array(const Array &rhs) {
			*this = rhs;
			return ;
		};

		Array &operator=(const Array &rhs) {
			this->_size = rhs._size;
			return *this;
		}; // Deep copy

		~Array() {
			delete[] this->_content;
			return ;
		};
		/* ================================================================= */

		/* CONSTRUCTORS ==================================================== */
		Array(t_size size) : _size(size), _content(new T[size]) {};
		/* ================================================================= */

		/* OPERATOR OVERLOADS ============================================== */
		/* ================================================================= */

		/* MEMBER FUNCTIONS ================================================ */
		t_size size(void) const {
			return this->_size;
		};
		/* ================================================================= */
};

#endif
