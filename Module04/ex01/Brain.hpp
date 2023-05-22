/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 16:14:04 by etachott          #+#    #+#             */
/*   Updated: 2023/05/22 16:15:19 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include "Emojis.hpp"

class Brain  {
	public:
		Brain ();
		Brain (const Brain &);
		Brain &operator=(const Brain &);
		~Brain ();

		std::string ideas[100];
};

#endif // !BRAIN_HPP
