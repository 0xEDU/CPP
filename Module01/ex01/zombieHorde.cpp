/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 13:36:46 by etachott          #+#    #+#             */
/*   Updated: 2023/04/18 15:45:44 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name ) {
	if (N < 0 || N >= std::numeric_limits<int>::max()) {
		std::cout << "Invalid N value!" << std::endl;
		return (NULL);
	}
	if (N == 0) std::cout << "Allocating nothing!" << std::endl;
	try {
		Zombie *horde = new Zombie[N];

		for (int i = 0; i < N; i++) {
			horde[i].setName(name);
		}
		return (horde);
	} catch (std::bad_alloc) {
		std::cout << "Bad alloc!" << std::endl;
		return (NULL);
	}
}
