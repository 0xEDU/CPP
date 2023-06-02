/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:31:08 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 12:56:54 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	protected:
		const static int HIT_POINTS = 100;
		const static int ENERGY_POINTS = 100;
		const static int ATTACK_DAMAGE = 30;

	public:
		FragTrap ();
		FragTrap (std::string name);
		FragTrap (const FragTrap  &);
		FragTrap  &operator=(const FragTrap  &);
		~FragTrap ();

		void	highFiveGuys(void);
};

#endif // !FRAGTRAP_HPP
