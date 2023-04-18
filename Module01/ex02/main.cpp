/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:51:03 by etachott          #+#    #+#             */
/*   Updated: 2023/04/18 16:25:57 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void) {
	std::string brain = "HI THIS IS BRAIN";
	std::string *brainPTR = &brain;
	std::string &brainREF = brain;

	std::cout << "Memory addresses:" << std::endl;
	std::cout << &brain << std::endl;
	std::cout << brainPTR << std::endl;
	std::cout << &brainREF << std::endl;

	std::cout << std::endl;
	std::cout << "Variables values:" << std::endl;
	std::cout << brain << std::endl;
	std::cout << *brainPTR << std::endl;
	std::cout << brainREF << std::endl;
	return (0);
}
