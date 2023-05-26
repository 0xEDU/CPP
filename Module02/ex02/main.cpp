/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:15:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/26 17:45:57 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void) {
	{
		std::cout << YELLOW
			<< "=== Increment and decrement operator tests ===\n" << END;
		Fixed		a( 5 );

		std::cout << "a = " << a << std::endl;
		std::cout << "raw bits = " << a.getRawBits() << std::endl;
		std::cout << "++a = " << ++a << std::endl;
		std::cout << "raw bits = " << a.getRawBits() << std::endl;
		std::cout << "a++ = " << a++ << std::endl;
		std::cout << "raw bits = " << a.getRawBits() << std::endl;
		std::cout << "--a = " << --a << std::endl;
		std::cout << "raw bits = " << a.getRawBits() << std::endl;
		std::cout << "a-- = " << a-- << std::endl;
		std::cout << "raw bits = " << a.getRawBits() << std::endl;
	}
	{
		std::cout << YELLOW << "\n=== Comparison operator tests ===\n" << END;
		Fixed		a( 5 );
		Fixed		b( 10.15f );

		std::cout << "a = " << a << " " << "| b = " << b << std::endl;
		std::cout << std::endl;
		std::cout << "a < b = " << (a < b) << std::endl;
		std::cout << "a <= b = " << (a <= b) << std::endl;
		std::cout << "a > b = " << (a > b) << std::endl;
		std::cout << "a >= b = " << (a >= b) << std::endl;
		std::cout << "a == b = " << (a == b) << std::endl;
		std::cout << "a != b = " << (a != b) << std::endl;
	}
	{ std::cout << YELLOW << "\n=== Arithmetic operator tests ===\n" << END;
		Fixed		a( 5 );
		Fixed		b( 10.15f );

		std::cout << "a = " << a << " " << "| b = " << b << std::endl;
		std::cout << std::endl;
		std::cout << "a + b = " << a + b << std::endl;
		std::cout << "a - b = " << a - b << std::endl;
		std::cout << "a * b = " << a * b << std::endl;
		std::cout << "a / b = " << a / b << std::endl;
	}
	{
		std::cout << YELLOW << "\n=== Min and Max functions tets ===\n" << END;
		Fixed		a( 5 );
		Fixed		b( 10.15f );
		const Fixed		c( 8 );
		const Fixed		d( 18.21f );

		std::cout << "a = " << a << " " << "| b = " << b << std::endl;
		std::cout << "const c = " << c << " d = " << d << std::endl;
		std::cout << std::endl;
		std::cout << "min(a, b) = " << Fixed::min(a, b) << std::endl;
		std::cout << "(const) min(a, b) = " << Fixed::min(c, d) << std::endl;
		std::cout << "max(a, b) = " << Fixed::max(a, b) << std::endl;
		std::cout << "(const) max(a, b) = " << Fixed::max(c, d) << std::endl;
	}
	{
		std::cout << YELLOW << "\n=== Subject tests ===\n" << END;
		Fixed		a;
		Fixed const	b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max( a, b ) << std::endl;
	}
	return (0);
}
