/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:11:44 by etachott          #+#    #+#             */
/*   Updated: 2023/05/29 15:35:06 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << GREEN << "=== ClapTrap operates normally ==="
		<< END << std::endl;
	{
		ClapTrap a("Hal");

		a.attack("Atrocitus");
		a.takeDamage(3);
		a.beRepaired(5);
	}
	std::cout << GREEN << "\n=== ClapTrap dies ===" 
		<< END << std::endl;
	{
		ClapTrap a("Guy");

		a.attack("Parallax");
		a.takeDamage(10);
		a.beRepaired(5);
	}
	std::cout << GREEN << "\n== ClapTrap attacks and is out of energy =="
		<< END << std::endl;
	{
		ClapTrap a("John");

		for (int i = 0; i < 11; i++) {
			a.attack("Sinestro");
		}
	}
	std::cout << GREEN << "\n=== ClapTrap is repaired and run out of energy ==="
		<< END << std::endl;
	{
		ClapTrap a("Kyle");

		for (int i = 0; i < 11; i++) {
			a.beRepaired(5);
		}
	}
	return (0);
}
