/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:06:22 by etachott          #+#    #+#             */
/*   Updated: 2023/06/18 13:54:35 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer() {
	return ;
}

Serializer::Serializer(const Serializer &rhs) {
	*this = rhs;
	return ;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
	(void) rhs;
	return *this;
}

Serializer::~Serializer() {
	return ;
}

uintptr_t Serializer::serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}
