/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 16:50:06 by etachott          #+#    #+#             */
/*   Updated: 2023/05/29 18:37:38 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	void	pretty_print(std::string action);

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
