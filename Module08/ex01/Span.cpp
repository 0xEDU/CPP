/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 23:02:26 by etachott          #+#    #+#             */
/*   Updated: 2023/06/24 23:15:59 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// 	Variables:
//
// 	t_capacity		_N;
// 	t_capacity		_currentCapacity;
// 	std::vector<int>_content;
//
//	DONE:
//
// 	Span();
// 	Span(const Span &);
// 	Span &operator=(const Span &);
// 	~Span();
//
// 	TODO:
//
// 	class SpanIsFull : public std::exception {
// 		public:
// 			const char *what(void) const throw();
// 	};
//
// 	class SpanNotPossible : public std::exception {
// 		public:
// 			const char *what(void) const throw();
// 	};
//
// 	Span(t_capacity N);
//
// 	void	addNumber(const int number);
// 	void	addNumbers(
// 		std::vector<int>::iterator begin,
// 		std::vector<int>::iterator end,
// 		const int number
// 	);
//
// 	int	shortestSpan();
// 	int	longestSpan();

Span::Span() : _N(0), _currentCapacity(0), _content({0}) {
	return ;
}

Span::Span(const Span &rhs)
	: _N(rhs._N),
	_currentCapacity(rhs._currentCapacity),
	_content(rhs._content) {
	*this = rhs;
	return ;
}

Span &Span::operator=(const Span &rhs) {
	this->_N = rhs._N;
	this->_currentCapacity = rhs._currentCapacity;
	this->_content = rhs._content;
	return *this;
}

Span::~Span() {
	return ;
}

const char *Span::SpanIsFull::what() const throw() {
	return ("The Span is full!");
}

const char *Span::SpanNotPossible::what() const throw() {
	return ("No Span can be found! \
			Either the storage is empty or it has only one element");
}
