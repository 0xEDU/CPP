/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:36:14 by etachott          #+#    #+#             */
/*   Updated: 2023/04/18 15:44:30 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std::cout << YELLOW << "Allocating a small amount:" << END << std::endl;
	{
		int N = 3;
		Zombie	*horde = zombieHorde(N, "Gary");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Allocating 0:" << END << std::endl;
	{
		int N = 0;
		Zombie	*horde = zombieHorde(N, "Bob");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Allocating a negative number:" << END << std::endl;
	{
		int N = -1;
		Zombie	*horde = zombieHorde(N, "Kevin");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Allocating a lot:" << END << std::endl;
	{
		int N = 15;
		Zombie	*horde = zombieHorde(N, "Justin");

		if (horde)
			for (int i = 0; i < N; i++) {
				horde[i].announce();
			}
		delete []horde;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "Allocating a giant number:" << END << std::endl;
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
