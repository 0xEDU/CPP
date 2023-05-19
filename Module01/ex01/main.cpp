/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:36:14 by etachott          #+#    #+#             */
/*   Updated: 2023/05/19 14:52:25 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std::cout << YELLOW << "ALLOCATING A SMALL AMOUNT" << END << std::endl;
	{
		int N = 3;
		Zombie	*horde = zombieHorde(N, "Gary");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << YELLOW << "\nALLOCATING 0" << END << std::endl; {
		int N = 0;
		Zombie	*horde = zombieHorde(N, "Bob");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << YELLOW << "\nALLOCATING A NEGATIVE NUMBER" << END << std::endl;
	{
		int N = -1;
		Zombie	*horde = zombieHorde(N, "Kevin");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << YELLOW << "\nALLOCATING A LOT" << END << std::endl;
	{
		int N = 15;
		Zombie	*horde = zombieHorde(N, "Justin");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << YELLOW << "\nALLOCATING A GIANT NUMBER" << END << std::endl;
	{
		int N = std::numeric_limits<int>::max();
		Zombie	*horde = zombieHorde(N, "John");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	return 0;
}
