/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:39:22 by etachott          #+#    #+#             */
/*   Updated: 2023/05/26 15:14:29 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : rawValue(0){
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(const Fixed &rhs) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called\n";
	this->rawValue = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return ;
}

int	Fixed::getRawBits( void ) const { 
	std::cout << "getRawBits member function called\n";
	return (this->rawValue);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called\n";
	this->rawValue = raw;
	return ;
}
