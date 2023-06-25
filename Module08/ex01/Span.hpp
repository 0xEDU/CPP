/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:24:25 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 01:04:37 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstddef>
#include <iterator>
#include <vector>
#include <algorithm>
#include <limits>

typedef unsigned int t_capacity;

class Span {
	private:
		t_capacity		_N;
		t_capacity		_currentCapacity;
		std::vector<int>_content;

	public:
		Span();
		Span(const Span &);
		Span &operator=(const Span &);
		~Span();

		class SpanIsFull : public std::exception {
			public:
				const char *what(void) const throw();
		};

		class SpanNotPossible : public std::exception {
			public:
				const char *what(void) const throw();
		};

		Span(t_capacity N);

		void	addNumber(const int number);
		void	addNumbers(
			std::vector<int>::iterator begin,
			std::vector<int>::iterator end
		);

		int	shortestSpan();
		int	longestSpan();

		int	at(int position) const;
		t_capacity	getCurrentCapacity() const;
};

#endif // !SPAN_HPP
