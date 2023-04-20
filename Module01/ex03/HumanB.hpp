/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:39:55 by etachott          #+#    #+#             */
/*   Updated: 2023/04/20 20:19:36 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);
		
		Weapon		*weapon;
		std::string	name;
};
#endif // !HUMANB_HPP
