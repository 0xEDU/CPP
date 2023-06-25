/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 02:17:02 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 03:15:28 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>

template <class T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() : std::stack<T>() {};
		MutantStack(const MutantStack &rhs) { *this = rhs; };
		MutantStack &operator=(const MutantStack &rhs) {
			std::stack<T>::operator=(rhs);
			return *this;
		};
		~MutantStack() {};

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator
			reverse_iterator;

		iterator begin() { return std::stack<T>::c.begin(); }
		iterator end() { return std::stack<T>::c.end(); }
		reverse_iterator rbegin() { return std::stack<T>::c.rbegin(); }
		reverse_iterator rend() { return std::stack<T>::c.rend(); }
};

#endif // !MUTANTSTACK_HPP
