/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:45 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 17:38:01 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>
#include "Emojis.hpp"

#define YELLOW "\033[1;33m"
#define END "\033[0m"

class AAnimal {
	protected:
		std::string type;

	public:
		AAnimal ();
		AAnimal (const AAnimal &);
		AAnimal &operator=(const AAnimal &);
		virtual ~AAnimal ();

		virtual void	makeSound() const = 0;
		virtual std::string		getType() const = 0;
};

#endif
