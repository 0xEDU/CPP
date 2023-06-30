/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:13:52 by etachott          #+#    #+#             */
/*   Updated: 2023/06/30 14:41:45 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

typedef std::pair<int, int> intPair;
typedef std::pair<std::vector<int>, std::vector<int> > vectorPair;
typedef std::vector<intPair>::iterator intPairIt;

class PmergeMe {
	private:
		std::vector<int>	_v;
		std::list<int>		_l;
		int					_size;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);
		~PmergeMe();

		PmergeMe(char *argv[]);

		std::vector<int>	getVector(void) const;
		std::list<int>		getList(void) const;

		static void validateInput(int argc, char *argv[]);

		void vMergeInsertionSort(void);
};

std::ostream &operator<<(std::ostream &o, std::vector<int> v);
std::ostream &operator<<(std::ostream &o, std::list<int> l);
#endif // !PMERGEME_HPP
