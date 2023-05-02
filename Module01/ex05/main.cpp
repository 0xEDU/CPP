/* Insert header */

#include "Harl.hpp"

int	main(void) {
	Harl harl;

	std::cout << YELLOW << "DEBUG:\n" << END;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << YELLOW << "INFO:\n" << END;
	harl.complain("INFO");
	std::cout << std::endl;
	std::cout << YELLOW << "WARNING:\n" << END;
	harl.complain("WARNING");
	std::cout << std::endl;
	std::cout << YELLOW << "ERROR:\n" << END;
	harl.complain("ERROR");
	std::cout << std::endl;
	std::cout << YELLOW << "Invalid\n" << END;
	harl.complain("Invalid");
	return (0);
}