/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:57:18 by edu               #+#    #+#             */
/*   Updated: 2023/06/20 17:56:03 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATTEDPRINT_HPP
#define FORMATTEDPRINT_HPP

#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>

#define YELLOW "\033[1;33m"
#define END "\033[0m"

void formattedPrintChar(std::string c);
void formattedPrintInt(std::string c);
void formattedPrintFloat(std::string c);
void formattedPrintDouble(std::string c);
bool isSpecialString(std::string c);
#endif
