/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:03:35 by etachott          #+#    #+#             */
/*   Updated: 2023/06/18 13:50:14 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <stdint.h>

#include "Data.hpp"

class Serializer {
	private:
		Serializer();
		Serializer(const Serializer &);
		Serializer &operator=(const Serializer &);
		~Serializer();
	public:
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};

#endif // !SERIALIZER_HPP
