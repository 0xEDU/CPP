/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 19:02:57 by etachott          #+#    #+#             */
/*   Updated: 2023/04/12 19:14:26 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main (void)
{
	Zombie *gary = newZombie("gary");
	randomChump("Virgílio Gonçalves da Silva");

	gary->announce();
	delete gary;
	return (0);
}
