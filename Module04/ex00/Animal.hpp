/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:45 by edu               #+#    #+#             */
/*   Updated: 2023/05/14 17:15:25 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

#define YELLOW "\033[1;33m"
#define END "\033[0m"

class Animal {
	protected:
		std::string type;

	public:
		Animal ();
		Animal (const Animal &);
		Animal &operator=(const Animal &);
		virtual ~Animal ();

		virtual void	makeSound() const;
		std::string		getType() const;
};

#endif
