/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 18:25:00 by edu               #+#    #+#             */
/*   Updated: 2023/05/22 12:55:22 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

// TODO:
//
// Implement Wrong animals

int main (void) {
	std::cout << YELLOW << "INSTANTIATING DOG CLASS" << END << std::endl;
	{
		Dog a;

		a.makeSound();
		std::cout << a.getType() << std::endl;
	}
	std::cout << YELLOW << "\nINSTANTIATING CAT CLASS" << END << std::endl;
	{
		Cat a;

		a.makeSound();
		std::cout << a.getType() << std::endl;
	}
	std::cout << YELLOW << "\nNO POINTER USED" <<
		", ASSIGNING BASE CLASS VARIABLE TO CHILD CLASS INSTANCE"
		<< END << std::endl;
	{
		Animal a = Dog();

		a.makeSound();
		std::cout << a.getType() << std::endl;
	}
	std::cout << YELLOW << "\nPOINTER USED" << 
		", ASSIGNING BASE CLASS VARIABLE TO CHILD CLASS INSTANCE"
		<< END << std::endl;
	{
		Animal *a = new Dog();

		a->makeSound();
		std::cout << a->getType() << std::endl;
		delete a;
	}
	std::cout << YELLOW << "\nWRONG CAT TESTS" << END << std::endl;
	{
		const WrongAnimal *a = new WrongCat();

		a->makeSound();
		std::cout << a->getType() << std::endl;
		delete a;
	}
	std::cout << YELLOW << "\nSUBJECT TESTS" << END << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound(); // will output the cat sound!
		j->makeSound();
		meta->makeSound();
		delete meta;
		delete i;
		delete j;
	}
	return (0);
}
