/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:20:37 by edu               #+#    #+#             */
/*   Updated: 2023/06/21 13:09:49 by etachott         ###   ########.fr       */
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
		ScalarConverter &operator=(const ScalarConverter &);
	public:

		static void convert(char *input);
};
#endif
