/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 15:39:22 by etachott          #+#    #+#             */
/*   Updated: 2023/05/05 15:29:52 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

// int		getRawBits( void ) const;
// void	setRawBits( int const raw );
// float	toFloat( void ) const;
// int		toInt( void ) const;
// bool	&operator>(const Fixed &);
// bool	&operator<(const Fixed &);
// bool	&operator>=(const Fixed &);
// bool	&operator<=(const Fixed &);
// bool	&operator==(const Fixed &);
// bool	&operator!=(const Fixed &);
// Fixed	operator+(const Fixed &);
// Fixed	operator-(const Fixed &);
// Fixed	operator*(const Fixed &);
// Fixed	operator/(const Fixed &);
// Fixed	&operator++();
// Fixed	operator++(int);
// Fixed	&operator--();
// Fixed	operator--(int);
// static Fixed	&min(Fixed &a, Fixed &b);
// static Fixed	&min(const Fixed &a, const Fixed &b);
// static Fixed	&max(Fixed &a, Fixed &b);
// static Fixed	&max(const Fixed &a, const Fixed &b);
//
// Done!

Fixed::Fixed(void) : _rawBits(0) {
	return ;
}

Fixed::Fixed(const Fixed &rhs) {
	*this = rhs;
	return ;
}

Fixed::Fixed(const int num) {
	this->_rawBits = num << this->_fractional;
	return ;
}

Fixed::Fixed(const float num) {
	this->_rawBits = static_cast<int>(roundf(num * (1 << this->_fractional)));
	return ;
}
Fixed::~Fixed(void) {
	return ;
}

Fixed	&Fixed::operator=(const Fixed &rhs) {
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(const Fixed &rhs) {
	return (this->_rawBits > rhs.getRawBits());
}

bool	Fixed::operator<(const Fixed &rhs) {
	return (this->_rawBits < rhs.getRawBits());
}

bool	Fixed::operator>=(const Fixed &rhs) {
	return (this->_rawBits >= rhs.getRawBits());
}

bool	Fixed::operator<=(const Fixed &rhs) {
	return (this->_rawBits <= rhs.getRawBits());
}

bool	Fixed::operator==(const Fixed &rhs) {
	return (this->_rawBits == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed &rhs) {
	return !(*this == rhs);
}

Fixed	Fixed::operator+(const Fixed &rhs) {
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &rhs) {
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &rhs) {
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &rhs) {
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed	&Fixed::operator++() {
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {
	Fixed	temp = *this;

	++*this;
	return (temp);
}

Fixed	&Fixed::operator--() {
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	temp = *this;

	--*this;
	return (temp);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &rhs ) {
	o << rhs.toFloat();
	return (o);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b) {
	return (a < b ? a : b);
}

Fixed	const &Fixed::min(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b) {
	return (a > b ? a : b);
}

Fixed	const &Fixed::max(const Fixed &a, const Fixed &b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
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
