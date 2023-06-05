/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:20:45 by etachott          #+#    #+#             */
/*   Updated: 2023/06/05 19:22:11 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "MateriaSource.hpp"

class Character : public ICharacter {
	AMateria *_inventory[4];
	std::string _name;

	public:
		Character ();
		Character (const Character &);
		Character &operator=(const Character &);
		~Character ();

		Character (std::string name);
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

		std::string const &getName() const;
		AMateria *getAMateria(int idx) const;
};

#endif // !CHARACTER_HPP
