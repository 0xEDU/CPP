/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:50:18 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 18:53:39 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"

#include <iostream>

class AMateria  {
	protected:

	public:
		AMateria(std::string const &type);

		AMateria ();
		AMateria (const AMateria &);
		AMateria &operator=(const AMateria &);
		~AMateria ();

		std::string const &getType() const;

		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif // !AMATERIA_HPP
