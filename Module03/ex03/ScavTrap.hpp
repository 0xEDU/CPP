/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:50:06 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 12:57:30 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
	void	pretty_print(std::string action);

	protected:
		const static int HIT_POINTS = 100;
		const static int ENERGY_POINTS = 50;
		const static int ATTACK_DAMAGE = 20;

	public:
		ScavTrap ();
		ScavTrap (std::string name);
		ScavTrap (const ScavTrap  &);
		ScavTrap  &operator=(const ScavTrap  &);
		~ScavTrap ();

		void	guardGate(void);
		void	attack(const std::string &target);
};

#endif // !SCAVTRAP_HPP
