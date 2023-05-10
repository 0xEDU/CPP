/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:31:08 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 18:55:07 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap ();
		FragTrap (std::string name);
		FragTrap (const FragTrap  &);
		FragTrap  &operator=(const FragTrap  &);
		~FragTrap ();

		void	highFiveGuys(void);
};

#endif // !FRAGTRAP_HPP
