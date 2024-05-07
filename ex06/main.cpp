#include "Harl.hpp"

int main()
{
	std::string level;
	std::cout << "Hi, I'm Harl" << endl;
	std::cout << "I have 4 levels -> DEBUG, ERROR, WARNING, INFO" << std::endl;
	cout << "Enter one of my levels to see the info " << std::endl;
	Harl harl_;
	std::cin >> level;
	harl_.complain(level);
	return 0;
}