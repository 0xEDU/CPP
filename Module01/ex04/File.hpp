/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 02:57:57 by etachott          #+#    #+#             */
/*   Updated: 2023/04/24 15:12:58 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

#include <fstream>
#include <iostream>
#include <cstddef>

class File {
	private:
		char	_mode;

	public:
		File(const char *filename, const char mode);
		File(std::string &filename, const char mode);
		~File(void);

		std::ifstream	istream;
		std::ofstream	ostream;

		void	append(std::string &line);
};

bool	validate_file(int argc, char **argv);
void	str_replace(std::string &src_line,
					std::string &replacement,
					std::string &target_pos);
#endif // !FILE_HPP
