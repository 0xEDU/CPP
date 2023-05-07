/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:33:39 by etachott          #+#    #+#             */
/*   Updated: 2023/05/05 15:07:48 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <limits>
#include <cmath>

class Fixed {
	int					_rawBits;
	static const int	_fractional = 8;

	public:
		Fixed();
		Fixed(const Fixed &rhs);
		Fixed &operator=(const Fixed &rhs);
		~Fixed();

		Fixed(const int num);
		Fixed(const float num);

		bool	operator>(const Fixed &);
		bool	operator<(const Fixed &);
		bool	operator>=(const Fixed &);
		bool	operator<=(const Fixed &);
		bool	operator==(const Fixed &);
		bool	operator!=(const Fixed &);

		Fixed	operator+(const Fixed &);
		Fixed	operator-(const Fixed &);
		Fixed	operator*(const Fixed &);
		Fixed	operator/(const Fixed &);

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed	&min(Fixed &a, Fixed &b);
		static Fixed	const &min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		static Fixed	const &max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs);

#endif // !FIXED_HPP
