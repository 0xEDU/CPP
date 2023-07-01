/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:13:52 by etachott          #+#    #+#             */
/*   Updated: 2023/07/01 17:02:00 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <ctime>
#include <deque>
#include <iostream>
#include <vector>

typedef std::pair<int, int> intPair;

typedef std::pair<std::vector<int>, std::vector<int> > vectorPair;
typedef std::vector<intPair>::iterator vIntPairIt;

typedef std::pair<std::deque<int>, std::deque<int> > dequePair;
typedef std::deque<intPair>::iterator dIntPairIt;

class PmergeMe {
	private:
		// Used containers
		std::vector<int>	_v;
		std::deque<int>		_d;

		std::clock_t	_vectorTime;
		std::clock_t	_dequeTime;
		int				_size;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);
		~PmergeMe();

		PmergeMe(char *argv[]);

		int	getSize(void);

		std::vector<int>	getVector(void) const;
		double				getVectorTime(void);

		std::deque<int>		getDeque(void) const;
		double				getDequeTime(void);

		void vMergeInsertionSort(void);
		void dMergeInsertionSort(void);

		static void validateInput(int argc, char *argv[]);
};

std::ostream &operator<<(std::ostream &o, std::vector<int> v);
std::ostream &operator<<(std::ostream &o, std::deque<int> d);
#endif // !PMERGEME_HPP
