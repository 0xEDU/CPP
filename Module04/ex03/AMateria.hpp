/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:50:18 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 19:09:43 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria  {
	protected:
		std::string type;

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
