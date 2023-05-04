/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:33:39 by etachott          #+#    #+#             */
/*   Updated: 2023/05/04 12:58:05 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>

class Fixed {
	int					value;
	static const int	fractional = 8;

	public:
		Fixed();
		Fixed(const Fixed &);
		Fixed(const int num);
		Fixed(const float num);
		Fixed &operator=(const Fixed &);
		~Fixed();

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs);

#endif // !FIXED_HPP
