/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:57:18 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 13:22:56 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATTEDPRINT_HPP
#define FORMATTEDPRINT_HPP

#include <iostream>
#include <cstdlib>

#define YELLOW "\033[1;33m"
#define END "\033[0m"

void formattedPrintChar(std::string c);
void formattedPrintInt(std::string c);
void formattedPrintFloat(std::string c);
void formattedPrintDouble(std::string c);
#endif
