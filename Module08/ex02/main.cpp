/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 02:15:45 by etachott          #+#    #+#             */
/*   Updated: 2023/06/25 03:17:50 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "MutantStack.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

int main()
{
	std::cout << YELLOW << "=== ITERATOR AND REVERSE_ITERATOR TESTS ==="
		<< END << std::endl;
	{
		MutantStack<int> mstack;
		for (int i = 42; i < 52; i++) {
			mstack.push(i);
		}

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "MutantStack with iterator: ";
		while (it != ite) {
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;

		MutantStack<int>::reverse_iterator rit = mstack.rbegin();
		MutantStack<int>::reverse_iterator rite = mstack.rend();
		std::cout << "MutantStack with reverse_iterator: ";
		while (rit != rite) {
			std::cout << *rit << " ";
			rit++;
		}
		std::cout << std::endl;
	}
	std::cout << YELLOW << "\n=== CANONICAL FORM TESTS ===" << END << std::endl;
	{
		MutantStack<int> mstack;
		for (int i = 10; i < 20; i++) {
			mstack.push(i);
		}

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		std::cout << "Original MutantStack: ";
		while (it != ite) {
			std::cout << *it << " ";
			it++;
		}
		std::cout << std::endl;

		MutantStack<int> mstack_copy1 = mstack;
		MutantStack<int>::iterator it1 = mstack_copy1.begin();
		MutantStack<int>::iterator ite1 = mstack_copy1.end();
		std::cout << "MutantStack copy 1: ";
		while (it1 != ite1) {
			std::cout << *it1 << " ";
			it1++;
		}
		std::cout << std::endl;

		MutantStack<int> mstack_copy2(mstack);
		MutantStack<int>::iterator it2 = mstack_copy2.begin();
		MutantStack<int>::iterator ite2 = mstack_copy2.end();
		std::cout << "MutantStack copy 2: ";
		while (it2 != ite2) {
			std::cout << *it2 << " ";
			it2++;
		}
		std::cout << std::endl;
	}
	std::cout << YELLOW << "\n=== CONTROL TEST ===" << END << std::endl;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		//[...]
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	std::cout << YELLOW << "\n=== SUBJECT TESTS ===" << END << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	return 0;
}
