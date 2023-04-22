/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 02:57:57 by etachott          #+#    #+#             */
/*   Updated: 2023/04/22 03:18:27 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>

class File {
	public:
		File(const char *filename);
		~File();

		std::ifstream	stream;
};

bool	validate_file(int argc, char **argv);
#endif // !FILE_HPP
