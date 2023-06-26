/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 13:25:30 by etachott          #+#    #+#             */
/*   Updated: 2023/06/26 13:28:19 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>

class RPN {
	private:
		std::string _input;

	public:
		RPN();
		RPN(const RPN &);
		RPN &operator=(const RPN &);
		~RPN();

		RPN(char *input);
};

#endif // !RPN_HPP
