/* Amazing header */
#include "Harl.hpp"

Harl::Harl(void) {
	return ;
}

Harl::~Harl(void) {
	return ;
}

void	Harl::complain(std::string level) {
	void	(Harl::*levels[4])(void)
		= {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	names[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == names[i])
			(this->*levels[i])();
	}
	return ;
}

void	Harl::debug( void ) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-tripe-pickle-special-ketchup burger. I really do!\n";
	return ;
}

void	Harl::info( void ) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
	return ;
}

void	Harl::warning( void ) {
	std::cout << "I think I deserve to have some exta bacon for free. I've been coming for years whereas you started working here since last month.\n";
	return ;
}

void	Harl::error( void ) {
	std::cout << "This is unacceptable! I want to speak to the manager now\n";
	return ;
}
