/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:14:17 by etachott          #+#    #+#             */
/*   Updated: 2023/06/27 16:56:50 by etachott         ###   ########.fr       */
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
