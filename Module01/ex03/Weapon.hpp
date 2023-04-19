/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:36:05 by etachott          #+#    #+#             */
/*   Updated: 2023/04/19 15:45:17 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
# define WEAPON
#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(const std::string);
		~Weapon();
		const std::string	&getType(void);
		void	setType(std::string type);

	private:
		std::string	_type;
};

#endif // !WEAPON
