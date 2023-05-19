/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott < etachott@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 18:36:01 by etachott          #+#    #+#             */
/*   Updated: 2023/05/19 12:18:07 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

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

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );
#endif // !ZOMBIE_HPP
