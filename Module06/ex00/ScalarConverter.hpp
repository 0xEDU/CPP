/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:20:37 by edu               #+#    #+#             */
/*   Updated: 2023/06/20 14:39:59 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <limits>

class ScalarConverter {
		ScalarConverter();
		ScalarConverter(const ScalarConverter &);
		~ScalarConverter();
	public:
		ScalarConverter &operator=(const ScalarConverter &);

		static void convert(char *input);
};
#endif
