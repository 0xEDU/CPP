/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:20:06 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 17:38:48 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"
#include "Emojis.hpp"

class Cat : public AAnimal {
	Brain *brain;

	public:
		Cat ();
		Cat (const Cat  &);
		Cat &operator=(const Cat &);
		~Cat ();

		void		makeSound() const;
		std::string	getType() const;
		void		setIdea(int i, std::string idea);
		std::string	getIdea(int i);
};

#endif
