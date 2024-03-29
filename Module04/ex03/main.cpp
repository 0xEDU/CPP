/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:41:11 by etachott          #+#    #+#             */
/*   Updated: 2023/06/03 02:01:50 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

#include "Colors.hpp"

// DONE:
//
// -> Implment MateriaSource functions;
// -> Implment Character functions;
// -> Fix leaks;
// -> Ice and Cure tests;
//
// TODO:
//
// -> Character test
// -> Write tests to assert that all functionalities are working as intended;

int main(void) {
	std::cout << YELLOW << "=== ICE TESTS ===" << END << std::endl;
	{
		AMateria *ice = new Ice();
		AMateria *clone;
		ICharacter *villain = new Character("villain");

		clone = ice->clone();
		std::cout << "Ice type: " << clone->getType() << std::endl;
		std::cout << "Clone type: " << clone->getType() << std::endl;
		std::cout << "Using type: ";
		ice->use(*villain);

		delete villain;
		delete clone;
		delete ice;
	}
	std::cout << YELLOW << "\n=== CURE TESTS ===" << END << std::endl;
	{
		AMateria *cure = new Cure();
		AMateria *clone;
		ICharacter *hero = new Character("hero");

		clone = cure->clone();
		std::cout << "Cure type: " << clone->getType() << std::endl;
		std::cout << "Clone type: " << clone->getType() << std::endl;
		std::cout << "Using type: ";
		cure->use(*hero);

		delete hero;
		delete clone;
		delete cure;
	}
	std::cout << YELLOW << "\n=== CHARACTER TESTS ===" << END << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		ICharacter *me = new Character("me");

		std::cout << "Character name: " << me->getName() << std::endl;
		std::cout << "Equiping materia..." << std::endl;
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		std::cout << "Unequiping materia..." << std::endl;
		me->unequip(0);
		me->unequip(1);

		delete me;
		delete src;
	}
	std::cout << YELLOW << "\n=== MANDATORY TESTS ===" << END << std::endl;
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");

		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	return (0);
}
