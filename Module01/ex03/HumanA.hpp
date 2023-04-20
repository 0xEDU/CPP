/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:32:24 by etachott          #+#    #+#             */
/*   Updated: 2023/04/20 15:43:05 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack(void);

		std::string	name;
		Weapon		&weapon;
};

#endif // !HUMANA_HPP
