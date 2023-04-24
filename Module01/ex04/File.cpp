/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:00:19 by etachott          #+#    #+#             */
/*   Updated: 2023/04/24 15:14:57 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const char *filename, const char mode) :
	_mode(mode),
	istream(mode == 'i' ? filename : ""),
	ostream(mode == 'o' ? filename : "")
{
	return ;
}

File::File(std::string &filename, const char mode) :
	_mode(mode),
	istream(mode == 'i' ? filename.c_str() : ""),
	ostream(mode == 'o' ? filename.c_str() : "")
{
	return ;
}

void	File::append(std::string &line) {
	if (this->_mode == 'o')
		this->ostream << line << std::endl;
	return ;
}

File::~File(void) {
	return ;
}
