/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 19:20:06 by edu               #+#    #+#             */
/*   Updated: 2023/05/14 16:43:35 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat ();
		Cat (const Cat  &);
		Cat &operator=(const Cat &);
		~Cat ();

		void		makeSound() const;
		std::string	getType();
};

#endif