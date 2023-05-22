/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:25:04 by etachott          #+#    #+#             */
/*   Updated: 2023/05/22 14:40:26 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include "Emojis.hpp"

class WrongCat : public WrongAnimal {
	protected:
		std::string type;

	public:
		WrongCat ();
		WrongCat (const WrongCat &);
		WrongCat &operator=(const WrongCat &);
		~WrongCat ();

		void		makeSound() const;
		std::string	getType();
};

#endif // !WRONGCAT_HPP
