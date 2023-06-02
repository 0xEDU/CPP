/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 19:13:08 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 12:41:31 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	std::string _name;

	public:
		DiamondTrap ();
		DiamondTrap (std::string name);
		DiamondTrap (const DiamondTrap  &);
		DiamondTrap  &operator=(const DiamondTrap  &);
		~DiamondTrap ();
};

#endif // !DIAMONDTRAP_HPP
