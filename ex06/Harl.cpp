#include "Harl.hpp"

void	Harl::error(void)
{
	cout << "\"ERROR\" level: These messages indicate an unrecoverable error has occurred." << endl;
	cout << "This is usually a critical issue that requires manual intervention." << endl;
	cout << "Example: \"This is unacceptable! I want to speak to the manager now.\"" << endl;
}

void	Harl::debug(void)
{
	cout << "\"DEBUG\" level: Debug messages contain contextual information." << endl;
	cout << "They are mostly used for problem diagnosis." << endl;
	cout << "Example: \"I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\"" << endl; 
}

void	Harl::info(void)
{
	cout << "\"INFO\" level: These messages contain extensive information. " << endl;
	cout << "They are helpful for tracing program execution in a production environment." << endl;
	cout << "Example: \"I cannot believe adding extra bacon costs more money. You didn’t put " << endl;
	cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!\"" << endl;
}

void	Harl::warning(void)
{
	cout << "\"WARNING\" level: Warning messages indicate a potential issue in the system." << endl;
	cout << "However, it can be handled or ignored." << endl;
	cout << "Example: \"I think I deserve to have some extra bacon for free. " << endl;
	cout << "I’ve been coming for years whereas you started working here since last month.\"" << endl;
}

void	Harl::complain(std::string level)
{
	const int n = 4;
	const std::string str_array[n] = {"DEBUG","INFO","WARNING","ERROR"};
	void	(Harl::*functionArray[n])();
	functionArray[0] = &Harl::debug;
	functionArray[1] = &Harl::info;
	functionArray[2] = &Harl::warning;
	functionArray[3] = &Harl::error;
	int i = 0;
	while (i < n && str_array[i] != level)
	{
		i++;
	}
	switch(i)
	{	
		case 0:
			(this->*functionArray[0])();
		case 1:
			(this->*functionArray[1])();
		case 2:
			(this->*functionArray[2])();
		case 3:
			(this->*functionArray[3])();
			break;
		default:
			cout << "My class Harl don't have level like -> " << level << endl;
			cout << "Harl only support levels like DEBUG, INFO, ERROR, WARNING" << endl;
			break;
	}
}
