/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   formattedPrint.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:57:18 by edu               #+#    #+#             */
/*   Updated: 2023/06/17 01:26:09 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORMATTEDPRINT_HPP
#define FORMATTEDPRINT_HPP

#include <iostream>
#include <cstdlib>

#define YELLOW "\033[1;33m"
#define END "\033[0m"

void formattedPrintChar(std::string c);
#endif
