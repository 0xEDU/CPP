/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:25:59 by etachott          #+#    #+#             */
/*   Updated: 2023/05/22 15:33:28 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>
#include "Emojis.hpp"

class WrongAnimal {
	protected:
		std::string type;

	public:
		WrongAnimal ();
		WrongAnimal (const WrongAnimal &);
		WrongAnimal &operator=(const WrongAnimal &);
		~WrongAnimal ();

		void		makeSound() const;
		std::string	getType() const;
};

#endif // !WRONGANIMAL_HPP
