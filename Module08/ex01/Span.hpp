/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:24:25 by etachott          #+#    #+#             */
/*   Updated: 2023/06/24 22:51:03 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cstddef>
#include <iterator>
#include <vector>

typedef unsigned int t_capacity;

class Span {
	private:
		t_capacity		_N;
		std::vector<int>_content;

	public:
		Span();
		Span(const Span &);
		Span &operator=(const Span &);
		~Span();

		Span(t_capacity N);

		void	addNumber(const int number);
		void	addNumbers(
			std::vector<int>::iterator begin,
			std::vector<int>::iterator end,
			const int number
		);

		int	shortestSpan();
		int	longestSpan();
};

#endif // !SPAN_HPP
