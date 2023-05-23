/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:20:06 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 15:59:48 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Emojis.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	Brain *brain;

	public:
		Dog ();
		Dog (const Dog  &);
		Dog  &operator=(const Dog  &);
		~Dog ();

		void		makeSound() const;
		std::string	getType();
		std::string	getIdea(int i);
		void		setIdea(int i, std::string);
};

#endif
