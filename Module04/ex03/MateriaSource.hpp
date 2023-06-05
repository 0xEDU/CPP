/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:18:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/05 19:31:54 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

class MateriaSource : public IMateriaSource {
	AMateria *_inventory[4];

	public:
		MateriaSource ();
		MateriaSource (const MateriaSource &);
		MateriaSource &operator=(const MateriaSource &);
		~MateriaSource ();

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);
};

#endif // !MATERIASOURCE_HPP
