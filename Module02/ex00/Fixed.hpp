/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:33:39 by etachott          #+#    #+#             */
/*   Updated: 2023/05/26 15:06:12 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	int					rawValue;
	static const int	bits = 8;

	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed &operator=(const Fixed &);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif // !FIXED_HPP
