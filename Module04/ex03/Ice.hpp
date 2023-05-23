/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:05:54 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 19:28:27 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {
	public:
		Ice ();
		Ice (const Ice &);
		Ice &operator=(const Ice &);
		~Ice ();

		Ice *clone() const;
		void use(ICharacter &target);
};

#endif // !ICE_HPP
