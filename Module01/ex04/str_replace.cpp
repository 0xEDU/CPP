/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_replace.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 13:47:04 by etachott          #+#    #+#             */
/*   Updated: 2023/04/24 14:20:38 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

void	str_replace(std::string &line,
					std::string &target,
					std::string &replacement)
{
	std::size_t pos = line.find(target);

	line.erase(pos, target.length());
	line.insert(pos, replacement);
}
