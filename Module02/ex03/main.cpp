/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:15:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/08 17:44:46 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

static void	assert(bool result, bool expected, const char *test) {
	if (result == expected)
		std::cout << GREEN << "[OK] " << END;
	else
		std::cout << RED << "[KO] " << END;
	std::cout << test << std::endl;
}

int	main(void) {
	Point	a(0, 0);
	Point	b(2, 0);
	Point	c(2, 2);
	Point	p(1.5f, 1);

	assert(bsp(a, b, c, p), true, "Point is inside the triangle");
	return (0);
}
