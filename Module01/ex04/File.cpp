/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 03:00:19 by etachott          #+#    #+#             */
/*   Updated: 2023/04/22 03:19:00 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(const char *filename) {
	this->stream = std::ifstream(filename);
	return ;
}

File::~File(void) {
	return ;
}
