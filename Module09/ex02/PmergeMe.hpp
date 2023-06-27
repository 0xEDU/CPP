/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:13:52 by etachott          #+#    #+#             */
/*   Updated: 2023/06/27 16:44:32 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

class PmergeMe {
	private:
		std::vector<int> _v;
		std::list<int> _l;

	public:
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);
		~PmergeMe();

		PmergeMe(char *argv[]);

		std::vector<int>	getVector(void) const;
		std::list<int>		getList(void) const;

		static void validateInput(int argc, char *argv[]);
};

std::ostream &operator<<(std::ostream &o, std::vector<int> v);
std::ostream &operator<<(std::ostream &o, std::list<int> l);
#endif // !PMERGEME_HPP
