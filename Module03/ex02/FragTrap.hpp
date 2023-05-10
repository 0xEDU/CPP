/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:31:08 by etachott          #+#    #+#             */
/*   Updated: 2023/05/10 18:31:42 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap {

	public:
		FragTrap ();
		FragTrap (const FragTrap  &);
		FragTrap  &operator=(const FragTrap  &);
		~FragTrap ();
};

#endif // !FRAGTRAP_HPP
