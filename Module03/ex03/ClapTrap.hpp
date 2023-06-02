/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:19:41 by etachott          #+#    #+#             */
/*   Updated: 2023/05/30 17:51:01 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

#define GREEN "\033[1;30m"
#define END "\033[0m"

class ClapTrap {
	protected:
		std::string	_name;
		std::string	_type;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	private:
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

		void		setName(std::string name);
		std::string	getName(void);
		void		setType(std::string type);
		std::string	getType(void);
		void		setHitPoints(int hp);
		int			getHitPoints(void);
		void		setEnergyPoints(int ep);
		int			getEnergyPoints(void);
		void		setAttackDamage(int ad);
		int			getAttackDamage(void);

		std::string	getName(void) const;
		std::string	getType(void) const;
		int			getHitPoints(void) const;
		int			getEnergyPoints(void) const;
		int			getAttackDamage(void) const;
};

#endif // !CLAPTRAP_HPP
