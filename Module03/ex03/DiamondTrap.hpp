/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:13:08 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 20:41:59 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, ScavTrap {
	std::string _name;

	public:
		DiamondTrap ();
		DiamondTrap (std::string name);
		DiamondTrap (const DiamondTrap  &);
		DiamondTrap  &operator=(const DiamondTrap  &);
		~DiamondTrap ();
};

#endif // !DIAMONDTRAP_HPP
