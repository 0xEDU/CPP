/* Insert header */

#ifndef HARL_HPP
#define HARL_HPP

#define YELLOW "\033[1;33m" 
#define END "\033[0m"

#include <string>
#include <iostream>

class Harl {
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );
};

#endif