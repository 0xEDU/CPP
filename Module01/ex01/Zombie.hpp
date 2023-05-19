/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:36:01 by etachott          #+#    #+#             */
/*   Updated: 2023/05/19 14:54:29 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
# define YELLOW "\033[3;33m" 
# define END "\033[0m"

#include <string>
#include <iostream>
#include <limits>

class Zombie {
	public:
		Zombie();
		~Zombie();

		std::string getName(void);
		void setName(std:: string name);

		void announce( void );

	private:
		std::string _name;
};

Zombie	*zombieHorde( int N, std::string name );
#endif // !ZOMBIE_HPP
