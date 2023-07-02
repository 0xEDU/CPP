/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:14:17 by etachott          #+#    #+#             */
/*   Updated: 2023/07/02 15:40:30 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* Canonical Form =========================================================== */
PmergeMe::PmergeMe() : _v(std::vector<int>(0)), _d(std::deque<int>(0)),
	_vectorTime(0), _dequeTime(0), _size(0) {
	this->_size = 0;
	return ;
}

PmergeMe::PmergeMe(const PmergeMe &rhs) {
	*this = rhs;
	return ;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
	this->_d = rhs._d;
	this->_v = rhs._v;
	return *this;
}

PmergeMe::~PmergeMe() {
	return ;
}
/* ========================================================================= */

/* Constructor ============================================================= */
PmergeMe::PmergeMe(char *argv[]) {
	this->_size = 0;
	for (int i = 1; argv[i]; i++) {
		int val = std::atoi(std::string(argv[i]).c_str());

		this->_v.push_back(val);
		this->_d.push_back(val);
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

std::ostream &operator<<(std::ostream &o, const std::deque<int> d) {
	std::deque<int>::const_iterator it = d.begin();

	for (; it != d.end(); it++) {
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
std::vector<int> PmergeMe::getVector(void) const { return this->_v; }

std::deque<int> PmergeMe::getDeque(void) const { return this->_d; }

double PmergeMe::getVectorTime(void) {
	return this->_vectorTime / (double)(CLOCKS_PER_SEC / 1000);
}

double PmergeMe::getDequeTime(void) {
	return this->_dequeTime / (double)(CLOCKS_PER_SEC / 1000);
}

int PmergeMe::getSize(void) { return this->_size; }
/* ========================================================================== */

/* Auxiliary functions ====================================================== */
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

inline static void validateChar(const char c) {
	std::isdigit(c) ? void(c) : throw std::logic_error("Invalid input!");
}

inline static unsigned long
jacobsthal(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

inline static bool
isLeftover(const intPair pair) { return pair.first == -1; }
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

// References:
//
// The Art of Computer Programming, Vol. 3: Sorting and Searching (2nd ed.), pp. 184–186
//
// https://www.geeksforgeeks.org/merge-sort/
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

/* ------------------------------------------------------------------------ 3 */
inline static void
merge(std::vector<intPair > &pairs, int begin, int mid, int end) {
	std::size_t leftArrayIdx = 0;
	std::size_t rightArrayIdx = 0;
	std::size_t mergedArrayIndex = begin;

	std::vector<intPair >
		leftArray(pairs.begin() + begin, pairs.begin() + mid + 1),
		rightArray(pairs.begin() + mid + 1, pairs.begin() + end + 1);

	for (;
		leftArrayIdx < leftArray.size()
		&& rightArrayIdx < rightArray.size(); mergedArrayIndex++
		) {
		if (leftArray[leftArrayIdx].second <= rightArray[rightArrayIdx].second)
		{
			pairs[mergedArrayIndex] = leftArray[leftArrayIdx];
			leftArrayIdx++;
		} else {
			pairs[mergedArrayIndex] = rightArray[rightArrayIdx];
			rightArrayIdx++;
		}
	}
	for (; leftArrayIdx < leftArray.size(); leftArrayIdx++) {
		pairs[mergedArrayIndex] = leftArray[leftArrayIdx];
		mergedArrayIndex++;
	}
	for (; rightArrayIdx < rightArray.size(); rightArrayIdx++) {
		pairs[mergedArrayIndex] = rightArray[rightArrayIdx];
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

	for (vIntPairIt it = pairs.begin(); it != pairs.end(); it++) {
		if (it->first == -1)
			continue ;
		mainChain.push_back(it->second);
		pend.push_back(it->first);
	}
	return mainChainAndPend;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 5 */
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

inline static std::vector<int>
insertPendIntoMainChain(vectorPair &mainChainAndPend) {
	std::vector<int> &mainChain = mainChainAndPend.first;
	std::vector<int> &pend = mainChainAndPend.second;
	mainChain.insert(
		mainChain.begin(),
		pend.front()
	); // Insert first element
	pend.erase(pend.begin());

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
		it = std::upper_bound(mainChain.begin(), mainChain.end(), item);
		mainChain.insert(it, item);
	}
	return mainChain;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 6 */
inline static bool
hasLeftover(std::vector<intPair> pairs) {
	vIntPairIt it = pairs.begin();
	for (; it != pairs.end(); it++) {
		if (it->first == -1)
			return true;
	}
	return false;
}

inline static void
insertLeftover(std::vector<int> &S, std::vector<intPair> pairs) {
	vIntPairIt pIt = std::find_if(pairs.begin(), pairs.end(), isLeftover);
	std::vector<int>::iterator it
		= std::upper_bound(S.begin(), S.end(), pIt->second);
	S.insert(it, pIt->second);
}
/* -------------------------------------------------------------------------- */
/* ------------------------------------------------------------------ Wrapper */
void PmergeMe::vMergeInsertionSort(void) {
	std::vector<int> S;
	vectorPair mainChainAndPend;
	
	this->_vectorTime = clock();

	std::vector<intPair> pairs = makePairs(this->_v); // 1
	sortPairs(pairs);                                 // 2
	mergeSort(pairs, 0, pairs.size() - 1);            // 3
	mainChainAndPend = createMainChainAndPend(pairs); // 4
	S = insertPendIntoMainChain(mainChainAndPend);    // 5
	if (hasLeftover(pairs))
		insertLeftover(S, pairs);                     // 6
	this->_v = S;

	this->_vectorTime = clock() - this->_vectorTime;
	return ;
}
/* -------------------------------------------------------------------------- */
/* ========================================================================== */

/* Ford-Johnson Algorithm for List ========================================== */
/* ------------------------------------------------------------------------ 1 */
inline static std::deque<intPair>
makePairs(const std::deque<int> &d) {
	std::deque<intPair > pairs;

	for (std::deque<int>::size_type i = 0; i + 1 < d.size(); i += 2)
		pairs.push_back(std::make_pair(d[i], d[i + 1]));
	if (d.size() % 2 != 0)
		pairs.push_back(std::make_pair(*(d.end() - 1), -1));
	return pairs;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 2 */
inline static void
sortPairs(std::deque<intPair> &pairs) {
	std::deque<intPair >::iterator it = pairs.begin();

	for (; it != pairs.end(); it++) {
		it->first > it->second
			? std::swap(it->first, it->second)
			: (void) it;
	}
	return ;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 3 */
inline static void
merge(std::deque<intPair > &pairs, int begin, int mid, int end) {
	std::size_t leftArrayIdx = 0;
	std::size_t rightArrayIdx = 0;
	std::size_t mergedArrayIndex = begin;

	std::deque<intPair >
		leftArray(pairs.begin() + begin, pairs.begin() + mid + 1),
		rightArray(pairs.begin() + mid + 1, pairs.begin() + end + 1);

	for (;
		leftArrayIdx < leftArray.size()
		&& rightArrayIdx < rightArray.size(); mergedArrayIndex++
		) {
		if (leftArray[leftArrayIdx].second <= rightArray[rightArrayIdx].second)
		{
			pairs[mergedArrayIndex] = leftArray[leftArrayIdx];
			leftArrayIdx++;
		} else {
			pairs[mergedArrayIndex] = rightArray[rightArrayIdx];
			rightArrayIdx++;
		}
	}
	for (; leftArrayIdx < leftArray.size(); leftArrayIdx++) {
		pairs[mergedArrayIndex] = leftArray[leftArrayIdx];
		mergedArrayIndex++;
	}
	for (; rightArrayIdx < rightArray.size(); rightArrayIdx++) {
		pairs[mergedArrayIndex] = rightArray[rightArrayIdx];
		mergedArrayIndex++;
	}
	return ;
}

inline static void
mergeSort(std::deque<intPair > &pairs, int begin, int end) {
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
inline static dequePair
createMainChainAndPend(std::deque<intPair> &pairs) {
	dequePair mainChainAndPend;
	std::deque<int> &mainChain = mainChainAndPend.first;
	std::deque<int> &pend = mainChainAndPend.second;

	for (dIntPairIt it = pairs.begin(); it != pairs.end(); it++) {
		if (it->first == -1)
			continue ;
		mainChain.push_back(it->second);
		pend.push_back(it->first);
	}
	return mainChainAndPend;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 5 */
inline static std::deque<int>
generateJacobSequence(std::deque<int> pend) {
	std::deque<int> jacobSequence;
	int jacobIndex = 3;
	
	while (jacobsthal(jacobIndex) < pend.size() - 1) {
		jacobSequence.push_back(jacobsthal(jacobIndex));
		jacobIndex++;
	}
	return jacobSequence;
}

inline static std::deque<int>
insertPendIntoMainChain(dequePair &mainChainAndPend) {
	std::deque<int> &mainChain = mainChainAndPend.first;
	std::deque<int> &pend = mainChainAndPend.second;
	mainChain.insert(
		mainChain.begin(),
		pend.front()
	); // Insert first element
	pend.erase(pend.begin());

	std::deque<int> jacobSequence
		= generateJacobSequence(mainChainAndPend.second);
	std::deque<int> indexSequence;
	bool isJacob = true;
	std::deque<int>::iterator it;
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
		it = std::upper_bound(mainChain.begin(), mainChain.end(), item);
		mainChain.insert(it, item);
	}
	return mainChain;
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------------ 6 */
inline static bool
hasLeftover(std::deque<intPair> pairs) {
	dIntPairIt it = pairs.begin();
	for (; it != pairs.end(); it++) {
		if (it->first == -1)
			return true;
	}
	return false;
}

inline static void
insertLeftover(std::deque<int> &S, std::deque<intPair> pairs) {
	dIntPairIt pIt = std::find_if(pairs.begin(), pairs.end(), isLeftover);
	std::deque<int>::iterator it
		= std::upper_bound(S.begin(), S.end(), pIt->second);
	S.insert(it, pIt->second);
}
/* -------------------------------------------------------------------------- */

/* ------------------------------------------------------------------ Wrapper */
void PmergeMe::dMergeInsertionSort(void) {
	std::deque<int> S;
	dequePair mainChainAndPend;
	
	this->_dequeTime = clock();

	std::deque<intPair> pairs = makePairs(this->_d);  // 1
	sortPairs(pairs);                                 // 2
	mergeSort(pairs, 0, pairs.size() - 1);            // 3
	mainChainAndPend = createMainChainAndPend(pairs); // 4
	S = insertPendIntoMainChain(mainChainAndPend);    // 5
	if (hasLeftover(pairs))
		insertLeftover(S, pairs);                     // 6
	this->_d = S;

	this->_dequeTime = clock() - this->_dequeTime;
	return ;
}
/* -------------------------------------------------------------------------- */
/* ========================================================================== */
