/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etachott <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:01:29 by etachott          #+#    #+#             */
/*   Updated: 2023/06/09 18:26:29 by etachott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

#include <iostream>
#include <fstream>

#define TREE \
"              * *             \n" \
"           *    *  *          \n" \
"      *  *    *     *  *      \n" \
"    *     *    *  *    *      \n" \
" * *   *    *    *    *   *   \n" \
" *     *  *    * * .#  *   *  \n" \
" *   *     * #.  .# *   *     \n" \
"  *      #.  #: #  * *    *   \n" \
" *   * *  #. ##        *      \n" \
"   *        ###               \n" \
"             ##               \n" \
"             ##.              \n" \
"             .##:             \n" \
"             :###             \n" \
"             ;###             \n" \
"           ,####.             \n" \
" //////////////////////////// \n"

class ShrubberyCreationForm : public AForm {
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};

#endif // !SHRUBBERYCREATIONFORM_HPP
