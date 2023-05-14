/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:45 by edu               #+#    #+#             */
/*   Updated: 2023/05/13 19:30:13 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal {
	protected:
		std::string type;

	public:
		Animal ();
		Animal (const Animal &);
		Animal &operator=(const Animal &);
		~Animal ();

		virtual void	makeSound();
		std::string		const getType();
};

#endif
