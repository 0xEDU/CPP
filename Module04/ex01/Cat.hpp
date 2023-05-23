/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:20:06 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 15:56:15 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include "Emojis.hpp"

class Cat : public Animal {
	Brain *brain;

	public:
		Cat ();
		Cat (const Cat  &);
		Cat &operator=(const Cat &);
		~Cat ();

		void		makeSound() const;
		std::string	getType();
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i);
};

#endif
