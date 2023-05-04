/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:39:22 by etachott          #+#    #+#             */
/*   Updated: 2023/05/04 12:25:49 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : value(0){
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(const Fixed &rhs) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment called\n";
	this->value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const { 
	std::cout << "getRawBits member function called\n";
	return (this->value);
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
	return ;
}
