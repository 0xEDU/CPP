/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:54:43 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 18:57:09 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARCTER_HPP
#define ICHARCTER_HPP

#include "AMateria.hpp"

#include <iostream>

class ICharacter  {
	public:
		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

#endif // !ICHARCTER_HPP
