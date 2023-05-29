/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:11:44 by etachott          #+#    #+#             */
/*   Updated: 2023/05/29 15:52:49 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void) {
	std::cout << GREEN << "=== ScavTrap operates normally ==="
		<< END << std::endl;
	{
		ScavTrap a("Hal");
		ClapTrap b("Joy");

		a.attack("Atrocitus");
		a.takeDamage(3);
		a.beRepaired(5);
		b.attack("Atrocitus");
		b.takeDamage(3);
		b.beRepaired(5);
	}
	std::cout << GREEN << "\n=== ScavTrap dies ===" << END << std::endl;
	{
		ScavTrap a("Guy");

		a.attack("Parallax");
		a.takeDamage(110);
		a.beRepaired(5);
	}
	std::cout << GREEN << "\n=== ScavTrap attacks and is out of energy ==="
		<< END << std::endl;
	{
		ScavTrap a("John");

		for (int i = 0; i < 51; i++) {
			a.attack("Sinestro");
		}
	}
	std::cout << GREEN << "\n=== ScavTrap is repaired and runs out of energy ==="
		<< END << std::endl;
	{
		ScavTrap a("Kyle");

		for (int i = 0; i < 51; i++) {
			a.beRepaired(5);
		}
	}
	std::cout << GREEN << "\n=== ScavTrap is guarding the gate ==="
		<< END << std::endl;
	{
		ScavTrap a("Simon");

		a.guardGate();
	}
	return (0);
}
