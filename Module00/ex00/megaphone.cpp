/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edu <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 18:38:00 by edu               #+#    #+#             */
/*   Updated: 2022/12/18 20:21:47 by edu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	to_upper(std::string & str)
{
	int	index;

	for (index = 0; str[index]; index++)
	{
		if (!isupper(str[index]))
			str[index] = (char)toupper(str[index]);
	}
}

int	main(int argc, char *argv[])
{
	std::string	str;
	int			index;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		str = argv[index];
		to_upper(str);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}
