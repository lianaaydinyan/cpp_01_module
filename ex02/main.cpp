#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	std::cout << "str pointer address = " << &str << std::endl;
	std::cout << "stringPTR pointer address = " << stringPTR << std::endl;
	std::cout << "stringREF referance address = " << &stringREF << std::endl;
	std::cout << "str pointer value = " << str << std::endl;
	std::cout << "stringPTR pointer value = " << *stringPTR << std::endl;
	std::cout << "stringREF referance value = " << stringREF << std::endl;

	return 0;

}