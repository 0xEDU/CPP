/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:19:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/29 15:32:35 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define GREEN "\033[1;30m"
#define END "\033[0m"

class ClapTrap {
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;

	void	pretty_print(std::string action);

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &);
		ClapTrap &operator=(const ClapTrap &);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif // !CLAPTRAP_HPP
