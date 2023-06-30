/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:14:17 by etachott          #+#    #+#             */
/*   Updated: 2023/06/30 14:07:25 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
	for (int i = 1; argv[i]; i++) {
		int val = std::atoi(std::string(argv[i]).c_str());

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

std::ostream &operator<<(std::ostream &o, const std::vector<std::pair<int, int> > v) {
	std::vector<std::pair<int, int> >::const_iterator it = v.begin();

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
inline static std::vector<std::pair<int, int> >
makePairs(const std::vector<int> &v) {
	std::vector<std::pair<int, int> > pairs;

	for (std::vector<int>::size_type i = 0; i + 1 < v.size(); i += 2)
		pairs.push_back(std::make_pair(v[i], v[i + 1]));
	if (v.size() % 2 != 0)
		pairs.push_back(std::make_pair(*(v.end() - 1), -1));
	return pairs;
}

// pair<small, big>
inline static void
sortPairs(std::vector<std::pair<int, int> > &pairs) {
	std::vector<std::pair<int, int> >::iterator it = pairs.begin();

	for (; it != pairs.end(); it++) {
		it->first > it->second
			? std::swap(it->first, it->second)
			: (void) it;
	}
	return ;
}

inline static void
merge(std::vector<std::pair<int, int> > &pairs, int begin, int mid, int end) {
	std::size_t leftArrayIndex = 0;
	std::size_t rightArrayIndex = 0;
	std::size_t mergedArrayIndex = begin;

	std::vector<std::pair<int, int> >
		leftArray(pairs.begin() + begin, pairs.begin() + mid + 1),
		rightArray(pairs.begin() + mid + 1, pairs.begin() + end + 1);

	for (;
		leftArrayIndex < leftArray.size()
		&& rightArrayIndex < rightArray.size();
		mergedArrayIndex++
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
mergeSort(std::vector<std::pair<int, int> > &pairs, int begin, int end) {
	if (begin >= end)
		return ;
	int mid = begin + (end - begin) / 2;
	mergeSort(pairs, begin, mid);
	mergeSort(pairs, mid + 1, end);
	merge(pairs, begin, mid, end);
	return ;
}

void PmergeMe::vMergeInsertionSort(void) {
	std::vector<int> S;
	std::vector<std::pair<int, int> > pairs = makePairs(this->_v); // 1
	
	sortPairs(pairs); // 2
	std::cout << "Before: \n" << pairs << std::endl;
	mergeSort(pairs, 0, pairs.size() - 1); // 3
	std::cout << "Before: \n" << pairs << std::endl;
	return ;
}
/* ========================================================================== */
