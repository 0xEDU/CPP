/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:39:22 by etachott          #+#    #+#             */
/*   Updated: 2023/05/03 15:42:38 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	return ;
}

Fixed::~Fixed(void) {
	return ;
}

int	Fixed::getRawBits( void ) const { 
	return (1);
}

void	Fixed::setRawBits( int const raw ) {
	(void) raw;
	return ;
}
