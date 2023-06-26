/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:32:14 by etachott          #+#    #+#             */
/*   Updated: 2023/06/26 18:59:37 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <stdexcept>

/* Canonical Form =========================================================== */
RPN::RPN() {
	return ;
}

RPN::RPN(const RPN &rhs) {
	*this = rhs;
	return ;
}

RPN &RPN::operator=(const RPN &rhs) {
	this->_input = rhs._input;
	return *this;
}

RPN::~RPN() {
	return ;
}
/* ========================================================================== */

/* Constructor ============================================================== */
RPN::RPN(char *input) : _input(std::string(input)) {}
/* ========================================================================== */

/* Auxiliary functions ====================================================== */
inline static bool isOperator(char c) {
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

inline static void removeWhitespaces(std::string &str) {
	str.erase(
		std::remove_if(str.begin(), str.end(), ::isspace),
		str.end()
	);
}

inline static bool isValidExpression(std::string expr) {
	std::string::iterator it = expr.begin();
	std::string::iterator itprev = it;
	std::string::iterator itnext = expr.begin() + 1;

	if (expr.size() < 3)
		return false;
	if ((std::isdigit(*it) && isOperator(*itnext))
		|| (isOperator(*it) && std::isdigit(*itnext)))
		return false;
	for (; itnext != expr.end(); itnext++) {
		if (!(isOperator(*it) || isOperator(*itnext))
			&& !(std::isdigit(*it) || std::isdigit(*itnext)))
			return false;
		if (std::isdigit(*itnext) && itnext + 1 == expr.end())
			return false;
		it++;
		itprev = it - 1;
	}
	return true;
}
/* ========================================================================== */

/* Member functions ========================================================= */
// https://mathworld.wolfram.com/ReversePolishNotation.html
int RPN::calculate(void) {
	std::stack<int> s;
	std::string::iterator it = this->_input.begin();
	int result = 0;

	removeWhitespaces(this->_input);
	if (!isValidExpression(this->_input))
		throw std::logic_error("Invalid expression!!!");
	for (; it != this->_input.end(); ++it) {
		if (std::isdigit(*it)) {
			s.push(*it - '0');
		} else if (isOperator(*it)) {
			int b = s.top();
			s.pop();
			if (s.size() == 0)
				throw std::logic_error("Invalid expression!!!");
			int a = s.top();
			s.pop();

			switch (*it) {
				case '+':
					s.push(a + b);
					break;
				case '-':
					s.push(a - b);
						break;
				case '*':
					s.push(a * b);
					break;
				case '/':
					if (b == 0)
						throw std::logic_error("THOU SHALT NOT DIVIDE BY 0!!");
					s.push(static_cast<int>(a / b));
					break;
			}
			// std::cout << s.size() << std::endl;
		} else {
			throw std::logic_error("Invalid input!");
		}
	}
	result = s.top();
	return result;
}
/* ========================================================================== */
