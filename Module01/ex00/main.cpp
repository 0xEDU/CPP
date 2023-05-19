/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:02:57 by etachott          #+#    #+#             */
/*   Updated: 2023/05/19 14:40:57 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	std::cout << "USING newZombie" << std::endl;
	{
		Zombie *gary = newZombie("gary");

		gary->announce();
		delete gary;
	}
	std::cout << "\nUSING randomChump" << std::endl;
	{
		randomChump("bob");
	}
	return (0);
}
