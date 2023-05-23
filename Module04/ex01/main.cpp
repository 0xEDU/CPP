/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:00 by edu               #+#    #+#             */
/*   Updated: 2023/05/23 16:04:02 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main (void) {
	std::cout << YELLOW << "=== DEEP COPY TESTS ===" << END << std::endl;
	std::cout << "CAT DEEP COPY" << std::endl;
	{
		Cat cat;
		Cat catto = cat;

		catto.setIdea(0, std::string("SLEEP"));
		std::cout << cat.getIdea(0) << std::endl;
		std::cout << catto.getIdea(0) << std::endl;
	}
	std::cout << "\nDOG DEEP COPY" << std::endl;
	{
		Dog dog;
		Dog doggo = dog;

		doggo.setIdea(0, "SLEEP");
		std::cout << dog.getIdea(0) << std::endl;
		std::cout << doggo.getIdea(0) << std::endl;
	}
	std::cout << YELLOW << "\n=== SUBJECT TESTS ===" << END << std::endl;
	{
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();

		delete dog;
		delete cat;
	}
	std::cout << YELLOW << "\n=== ARRAY TESTS ===" << END << std::endl;
	{
		const Animal *animals[10];
		std::cout << "CREATING ARRAY" << std::endl;
		for (int i = 0; i < 10; i++) {
			if (i < 5)
				animals[i] = new Cat();
			else
				animals[i] = new Dog();
		}
		std::cout << "\nDELETING ARRAY" << std::endl;
		for (int i = 0; i < 10; i++) {
			delete animals[i];
		}
	}
	return (0);
}
