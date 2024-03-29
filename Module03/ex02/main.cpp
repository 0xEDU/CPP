/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:11:44 by etachott          #+#    #+#             */
/*   Updated: 2023/05/30 18:17:58 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void) {
	std::cout << GREEN << "=== FragTrap operates normally ==="
		<< END << std::endl;
	{
		FragTrap a("Hal");
		ClapTrap b("Joy");

		a.attack("Atrocitus");
		a.takeDamage(3);
		a.beRepaired(5);
		b.attack("Atrocitus");
		b.takeDamage(3);
		b.beRepaired(5);
	}
	std::cout << GREEN << "\n=== FragTrap dies ===" << END << std::endl;
	{
		FragTrap a("Guy");

		a.attack("Parallax");
		a.takeDamage(110);
		a.beRepaired(5);
	}
	std::cout << GREEN << "\n=== FragTrap attacks and is out of energy ==="
		<< END << std::endl;
	{
		FragTrap a("John");

		for (int i = 0; i < 101; i++) {
			a.attack("Sinestro");
		}
	}
	std::cout << GREEN << "\n=== FragTrap is repaired and runs out of energy ==="
		<< END << std::endl;
	{
		FragTrap a("Kyle");

		for (int i = 0; i < 101; i++) {
			a.beRepaired(5);
		}
	}
	std::cout << GREEN << "\n=== FragTrap high five ==="
		<< END << std::endl;
	{
		FragTrap a("Simon");

		a.highFiveGuys();
	}
	return (0);
}
