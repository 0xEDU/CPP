/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:56:37 by etachott          #+#    #+#             */
/*   Updated: 2023/06/17 18:20:11 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main (int argc, char *argv[])
{
	Data importantData = {
		.role = "user",
		.name = "marvin",
		.password = 123
	};
	Data *importantDataCopy;
	uintptr_t ptr;

	ptr = Serializer::serialize(&importantData);
	std::cout << ptr;
	importantDataCopy = Serializer::deserialize(ptr);
	return 0;
}
