/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:14:17 by etachott          #+#    #+#             */
/*   Updated: 2023/06/26 19:30:31 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _v(std::vector<int>()), _l(std::list<int>()) {
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
