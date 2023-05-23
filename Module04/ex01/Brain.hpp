/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:14:04 by etachott          #+#    #+#             */
/*   Updated: 2023/05/23 15:48:22 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Emojis.hpp"

class Brain  {
	std::string ideas[100];

	public:
		Brain ();
		Brain (const Brain &);
		Brain &operator=(const Brain &);
		~Brain ();

		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

std::ostream &operator<<(std::ostream &, Brain const &brain);

#endif // !BRAIN_HPP
