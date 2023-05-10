/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:11:44 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 16:30:19 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << "== ClapTrap operates normally ==" << std::endl;
	{
		ClapTrap a("Hal");

		a.attack("Atrocitus");
		a.takeDamage(3);
		a.beRepaired(5);
	}
	std::cout << "\n== ClapTrap dies ==" << std::endl;
	{
		ClapTrap a("Guy");

		a.attack("Parallax");
		a.takeDamage(10);
		a.beRepaired(5);
	}
	std::cout << "\n== ClapTrap attacks and is out of energy ==" << std::endl;
	{
		ClapTrap a("John");

		for (int i = 0; i < 11; i++) {
			a.attack("Sinestro");
		}
	}
	std::cout << "\n== ClapTrap is repaired and runs out of energy =="
		<< std::endl;
	{
		ClapTrap a("Kyle");

		for (int i = 0; i < 11; i++) {
			a.beRepaired(5);
		}
	}
	return (0);
}
