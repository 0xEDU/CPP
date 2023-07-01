/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:14:17 by etachott          #+#    #+#             */
/*   Updated: 2023/07/01 04:14:58 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <algorithm>

/* Canonical Form =========================================================== */
PmergeMe::PmergeMe() : _v(std::vector<int>(0)), _l(std::list<int>(0)) {
	return ;
}

PmergeMe::PmergeMe(const PmergeMe &rhs) {
	*this = rhs;
	return ;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	this->_l = rhs._l;
	this->_v = rhs._v;
	return *this;
}

PmergeMe::~PmergeMe() {
	return ;
}
/* ========================================================================= */

/* Constructor ============================================================= */
PmergeMe::PmergeMe(char *argv[]) {
	for (int i = 1; argv[i]; i++) { int val = std::atoi(std::string(argv[i]).c_str());

		this->_v.push_back(val);
		this->_l.push_back(val);
		this->_size++;
	}
	return ;
}
/* ========================================================================== */

/* Operator overloading ===================================================== */
std::ostream &operator<<(std::ostream &o, const std::vector<int> v) {
	std::vector<int>::const_iterator it = v.begin();

	for (; it != v.end(); it++) {
		o << *it << " ";
	}
	return o;
}

std::ostream &operator<<(std::ostream &o, const std::list<int> l) {
	std::list<int>::const_iterator it = l.begin();

	for (; it != l.end(); it++) {
		o << *it << " ";
	}
	return o;
}

std::ostream &operator<<(std::ostream &o, const std::vector<intPair > v) {
	std::vector<intPair >::const_iterator it = v.begin();

	for (; it != v.end(); it++) {
		o << it->first << " : " << it->second << std::endl;
	}
	return o;
}
/* ========================================================================== */

/* Accessors ================================================================ */
std::vector<int> PmergeMe::getVector(void) const {
	return this->_v;
}

std::list<int> PmergeMe::getList(void) const {
	return this->_l;
}
/* ========================================================================== */

/* Auxiliary functions ====================================================== */
inline static void validateChar(const char c) {
	std::isdigit(c) ? void(c) : throw std::logic_error("Invalid input!");
}

inline static void checkForDuplicates(const std::vector<int> &v) {
	std::vector<int> sortedVec = v;
	std::sort(sortedVec.begin(), sortedVec.end());

	std::vector<int>::iterator it = sortedVec.begin() + 1;
	for (; it != sortedVec.end(); it++) {
		if (*it == *(it - 1))
			throw std::logic_error("Invalid input!");
	}
	return ;
}
/* ========================================================================== */

/* Static functions ========================================================= */
void PmergeMe::validateInput(int argc, char **argv) {
	std::vector<int> v;
	if (argc < 3)
		throw std::logic_error("Invalid input!");
	for (int i = 0; argv[i]; i++) {
		std::string temp(argv[i]);

		std::for_each(temp.begin(), temp.end(), validateChar);
		v.push_back(std::atoi(argv[i]));
	}
	checkForDuplicates(v);
	return ;
}
/* ========================================================================== */

// https://en.wikipedia.org/wiki/Merge-insertion_sort
/* Ford-Johnson Algorithm for Vector ======================================== */
/* ------------------------------------------------------------------------ 1 */
inline static std::vector<intPair>
makePairs(const std::vector<int> &v) {
	std::vector<intPair > pairs;

	for (std::vector<int>::size_type i = 0; i + 1 < v.size(); i += 2)
		pairs.push_back(std::make_pair(v[i], v[i + 1]));
	if (v.size() % 2 != 0)
		pairs.push_back(std::make_pair(*(v.end() - 1), -1));
	return pairs;
}
/* -------------------------------------------------------------------------- */

// pair<small, big>
/* ------------------------------------------------------------------------ 2 */
inline static void
sortPairs(std::vector<intPair> &pairs) {
	std::vector<intPair >::iterator it = pairs.begin();

	for (; it != pairs.end(); it++) {
		it->first > it->second
			? std::swap(it->first, it->second)
			: (void) it;
	}
	return ;
}
/* -------------------------------------------------------------------------- */

// https://www.geeksforgeeks.org/merge-sort/
/* ------------------------------------------------------------------------ 3 */
inline static void
merge(std::vector<intPair > &pairs, int begin, int mid, int end) {
	std::size_t leftArrayIndex = 0;
	std::size_t rightArrayIndex = 0;
	std::size_t mergedArrayIndex = begin;

	std::vector<intPair >
		leftArray(pairs.begin() + begin, pairs.begin() + mid + 1),
		rightArray(pairs.begin() + mid + 1, pairs.begin() + end + 1);

	for (;
		leftArrayIndex < leftArray.size()
		&& rightArrayIndex < rightArray.size(); mergedArrayIndex++
		) {
		if (leftArray[leftArrayIndex].second <= rightArray[rightArrayIndex].second) {
			pairs[mergedArrayIndex] = leftArray[leftArrayIndex];
			leftArrayIndex++;
		} else {
			pairs[mergedArrayIndex] = rightArray[rightArrayIndex];
			rightArrayIndex++;
		}
	}
	for (; leftArrayIndex < leftArray.size(); leftArrayIndex++) {
		pairs[mergedArrayIndex] = leftArray[leftArrayIndex];
		mergedArrayIndex++;
	}
	for (; rightArrayIndex < rightArray.size(); rightArrayIndex++) {
		pairs[mergedArrayIndex] = rightArray[rightArrayIndex];
		mergedArrayIndex++;
	}
	return ;
}

inline static void
mergeSort(std::vector<intPair > &pairs, int begin, int end) {
	if (begin >= end)
		return ;
	int mid = begin + (end - begin) / 2;
	mergeSort(pairs, begin, mid);
	mergeSort(pairs, mid + 1, end);
	merge(pairs, begin, mid, end);
	return ;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 4 */
inline static vectorPair
createMainChainAndPend(std::vector<intPair> &pairs) {
	vectorPair mainChainAndPend;
	std::vector<int> &mainChain = mainChainAndPend.first;
	std::vector<int> &pend = mainChainAndPend.second;

	for (intPairIt it = pairs.begin(); it != pairs.end(); it++) {
		mainChain.push_back(it->second);
		if (it->first == -1)
			continue ;
		pend.push_back(it->first);
	}
	return mainChainAndPend;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 5 */
inline static unsigned long
jacobsthal(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

inline static std::vector<int>
generateJacobSequence(std::vector<int> pend) {
	std::vector<int> jacobSequence;
	int jacobIndex = 3;
	
	while (jacobsthal(jacobIndex) < pend.size() - 1) {
		jacobSequence.push_back(jacobsthal(jacobIndex));
		jacobIndex++;
	}
	return jacobSequence;
}

// inline static std::vector<int>::iterator
// bissect(std::vector<int> mainChain) {
// 	std::vector<int>::iterator it;
//
// 	
// 	return it;
// }

inline static std::vector<int>
insertPendIntoMainChain(vectorPair &mainChainAndPend) {
	std::vector<int> &mainChain = mainChainAndPend.first;
	std::vector<int> &pend = mainChainAndPend.second;
	mainChain.insert(
		mainChain.begin(),
		pend.front()
	); // Insert first element

	std::vector<int> jacobSequence
		= generateJacobSequence(mainChainAndPend.second);
	std::vector<int> indexSequence;
	bool isJacob = true;
	std::vector<int>::iterator it;
	int item;

	for (unsigned long i = 0; i < pend.size(); i++) {
		if (jacobSequence.size() != 0 && isJacob != true) {
			indexSequence.push_back(jacobSequence[0]);
			item = pend[jacobSequence[0] - 1];
			jacobSequence.pop_back();
			isJacob = true;
		} else {
			if (std::find(indexSequence.begin(), indexSequence.end(), i)
				!= indexSequence.end())
				i++;
			if (i == 0)
				item = *(pend.end() - 1);
			else
				item = pend[i - 1];
			indexSequence.push_back(i);
			isJacob = false;
		}
		// it = std::find(mainChain.begin(), mainChain.end(), item);
		// it = bissect(mainChain);
		it = std::upper_bound(mainChain.begin(), mainChain.end(), item);
		mainChain.insert(it, item);
	}
	// std::cout << "Jacob: " << jacobSequence << std::endl;
	return mainChain;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------ Wrapper */
void PmergeMe::vMergeInsertionSort(void) {
	std::vector<int> S;
	std::vector<intPair> pairs = makePairs(this->_v); // 1
	vectorPair mainChainAndPend;
	
	sortPairs(pairs); // 2
	// std::cout << "Before: \n" << pairs << std::endl;
	mergeSort(pairs, 0, pairs.size() - 1); // 3
	mainChainAndPend = createMainChainAndPend(pairs); // 4
	// std::cout << "After: \n" << pairs << std::endl;

	this->_v = insertPendIntoMainChain(mainChainAndPend); //5
	// std::cout << "Main Chain: " << mainChainAndPend.first << std::endl;
	// std::cout << "Pend: " << mainChainAndPend.second << std::endl;
	return ;
}
/* -------------------------------------------------------------------------- */
/* ========================================================================== */
