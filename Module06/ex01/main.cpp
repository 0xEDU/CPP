/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:56:37 by etachott          #+#    #+#             */
/*   Updated: 2023/06/18 14:01:26 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

static std::ostream &operator<<(std::ostream &o, Data &data) {
	o << "Role: " << data.role << std::endl
		<< "Name: " << data.name << std::endl
		<< "Password: " << data.password << std::endl;
	return o;
}

int main (void) {
	Data importantData = {
		.role = "user",
		.name = "marvin",
		.password = 123
	};
	Data *importantDataCopy;
	uintptr_t ptr;

	std::cout << YELLOW << "=== ORIGINAL DATA ===\n" << END
		<< importantData << std::endl;

	ptr = Serializer::serialize(&importantData);
	std::cout << YELLOW << "=== SERIALIZED VALUE ===\n" << END
		<< "PTR: " << ptr << std::endl;

	importantDataCopy = Serializer::deserialize(ptr);
	std::cout << YELLOW << "\n=== DESERIALIZED DATA ===\n" << END
		<< *importantDataCopy << std::endl;
	return (0);
}
