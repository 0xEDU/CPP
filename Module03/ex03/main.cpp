/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:11:44 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 19:54:27 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void) {
	std::cout << "== DiamondTrap operates normally ==" << std::endl;
	{
		DiamondTrap a("Hal");
		ClapTrap b("Joy");

		a.attack("Atrocitus");
		a.takeDamage(3);
		a.beRepaired(5);
		b.attack("Atrocitus");
		b.takeDamage(3);
		b.beRepaired(5);
	}
	std::cout << "\n== DiamondTrap dies ==" << std::endl;
	{
		DiamondTrap a("Guy");

		a.attack("Parallax");
		a.takeDamage(110);
		a.beRepaired(5);
	}
	std::cout << "\n== DiamondTrap attacks and is out of energy ==" << std::endl;
	{
		DiamondTrap a("John");

		for (int i = 0; i < 101; i++) {
			a.attack("Sinestro");
		}
	}
	std::cout << "\n== DiamondTrap is repaired and runs out of energy =="
		<< std::endl;
	{
		DiamondTrap a("Kyle");

		for (int i = 0; i < 101; i++) {
			a.beRepaired(5);
		}
	}
	std::cout << "\n== DiamondTrap high five =="
		<< std::endl;
	{
		DiamondTrap a("Simon");

		a.highFiveGuys();
	}
	std::cout << GREEN << "\n=== ScavTrap is guarding the gate ==="
		<< END << std::endl;
	{
		DiamondTrap a("Simon");

		a.guardGate();
	}
	std::cout << GREEN << "\n== DiamondTrap dies ==" << END << std::endl;
	{
		DiamondTrap a("Guy");

		std::cout << a.getName() << std::endl;
		std::cout << a.getHitPoints() << std::endl;
		std::cout << a.getEnergyPoints() << std::endl;
		std::cout << a.getAttackDamage() << std::endl;
	}
	return (0);
}
