/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:05:54 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 19:30:49 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
		Cure ();
		Cure (const Cure &);
		Cure &operator=(const Cure &);
		~Cure ();

		Cure *clone() const;
		void use(ICharacter &target);
};

#endif // !CURE_HPP
