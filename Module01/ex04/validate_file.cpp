/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_args.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 17:27:01 by etachott          #+#    #+#             */
/*   Updated: 2023/04/22 02:58:50 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

bool	validate_file(int argc, char *argv[]) {
	if (argc != 4)
		return (false);
	std::ifstream from(argv[1]);
	if (!from)
		return (false);
	return (true);
}
