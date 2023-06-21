/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 19:46:21 by edu               #+#    #+#             */
/*   Updated: 2023/06/21 14:54:33 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

typedef unsigned int t_size;

template <typename T>
class Array {
	private:
		t_size	_size;
		T		*_content;

	public:
		/* CANONICAL FORM ================================================== */
		Array() : _size(0), _content(new T[0]) {};

		Array(const Array &rhs) : _size(rhs.size()), _content(NULL) {
			*this = rhs;
			return ;
		};

		Array<T> &operator=(const Array<T> &rhs) {
			if (this != &rhs) {
				if (this->_size)
					delete this->_content;
				this->_size = rhs.size();
				if (this->_size)
					this->_content = new T[this->_size];
				for (size_t i = 0; i < this->_size; i++)
					this->_content[i] = rhs[i];
			}
			return *this;
		};

		~Array() {
			delete[] this->_content;
			return ;
		};
		/* ================================================================= */

		/* CONSTRUCTORS ==================================================== */
		Array(t_size size) : _size(size), _content(new T[size]) {};
		/* ================================================================= */

		/* OPERATOR OVERLOADS ============================================== */
		T &operator[](size_t index) {
			if (index > (this->_size - 1) || index < 0)
				throw std::out_of_range("Index out of range!");
			return this->_content[index];
		};

		const T &operator[](size_t index) const {
			if (index > (this->_size - 1) || index < 0)
				throw std::out_of_range("Index out of range!");
			return this->_content[index];
		};
		/* ================================================================= */

		/* MEMBER FUNCTIONS ================================================ */
		t_size size(void) const {
			return this->_size;
		};
		/* ================================================================= */
};

#endif
