/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:15:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/27 14:23:22 by etachott         ###   ########.fr       */
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

	std::cout << YELLOW << "=== TESTS ===" << END << std::endl;
	{
		Point	a(0, 0);
		Point	b(2, 0);
		Point	c(2, 2);
		Point	p(3, 3);

		assert(bsp(a, b, c, p), false, "Point is outside the triangle");
	}
	{
		Point	a(0, 0);
		Point	b(2, 0);
		Point	c(2, 2);
		Point	p(1.5f, 1);

		assert(bsp(a, b, c, p), true, "Point is inside the triangle");
	}
	{
		Point	a(0, 0);
		Point	b(2, 0);
		Point	c(2, 2);
		Point	p(2, 2);

		assert(bsp(a, b, c, p), false, "Point is a vertex of the triangle");
	}
	{
		Point	a(0, 0);
		Point	b(2, 0);
		Point	c(2, 2);
		Point	p(1, 2);

		assert(bsp(a, b, c, p), false, "Point is on edge of the triangle");
	}
	return (0);
}
