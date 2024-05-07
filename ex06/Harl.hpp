#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

const std::string str_array[4] = {"DEBUG","INFO","WARNING","ERROR"};

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl() {};
		~Harl() {};
		void	complain(std::string level);
};


#endif