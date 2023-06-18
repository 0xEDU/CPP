/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 14:25:54 by edu               #+#    #+#             */
/*   Updated: 2023/06/18 15:14:51 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "functions.hpp"

int main(void) {
	std::cout << YELLOW << "=== CREATING A ===\n" << END;
	{
		Base *a = new A();

		identify(a);
		identify(*a);
		delete a;
	}
	std::cout << YELLOW << "\n=== CREATING B ===\n" << END;
	{
		Base *b = new B();

		identify(b);
		identify(*b);
		delete b;
	}
	std::cout << YELLOW << "\n=== CREATING C ===\n" << END;
	{
		Base *c = new C();

		identify(c);
		identify(*c);
		delete c;
	}
	std::cout << YELLOW << "\n=== CREATING AN INVALID CLASS ===\n" << END;
	{
		Base *q = NULL;

		identify(q);
		identify(*q);
	}
	std::cout << YELLOW << "\n=== CREATING A RANDOM CLASS ===\n" << END;
	{
		Base *p = generate();

		identify(p);
		identify(*p);
		delete p;
	}
	return (0);
}
