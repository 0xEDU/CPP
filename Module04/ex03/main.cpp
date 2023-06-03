/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:41:11 by etachott          #+#    #+#             */
/*   Updated: 2023/06/02 23:47:08 by etachott         ###   ########.fr       */
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
//
// TODO:
//
// -> Write tests to assert that all functionalities are working as intended;

int main(void) {
	std::cout << YELLOW << "\n=== ICE TESTS ===" << END << std::endl;
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
