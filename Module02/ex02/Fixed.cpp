/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:39:22 by etachott          #+#    #+#             */
/*   Updated: 2023/05/04 16:20:12 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _rawBits(0) {
	std::cout << "Default constructor called\n";
	return ;
}

Fixed::Fixed(const Fixed &rhs) {
	std::cout << "Copy constructor called\n";
	*this = rhs;
	return ;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = num << this->_fractional;
	return ;
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = static_cast<int>(roundf(num * (1 << this->_fractional)));
	return ;
}
Fixed::~Fixed(void) {
	std::cout << "Destructor called\n";
	return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment called\n";
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return (o);
}

int	Fixed::getRawBits( void ) const { 
	return (this->_rawBits);
}

void	Fixed::setRawBits( int const raw ) {
	this->_rawBits = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	return (static_cast<float>(this->_rawBits) / (1 << this->_fractional));
}

int		Fixed::toInt( void ) const {
	return (this->_rawBits >> this->_fractional);
}
