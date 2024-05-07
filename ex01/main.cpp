#include "Zombie.hpp"

int main()
{
	int n;

	std::cout << "Enter a number to create Zombies -> ";
	std::cin >> n;
	if (std::cin.fail())
	{
		std::cout << "Enter only numbers";
		return -1;
	}
	if (n >= 0)
	{
		std::cin.ignore();
		std::string name;
		std::cout << "Enter name for  Zombies -> ";
		std::getline(std::cin, name);
		if (std::cin.eof())
		{
			std::cin.clear();
				exit(-1);
		}
		Zombie* zumba = nullptr;
		zumba = zumba->zombieHorde(n, name);
		for (int i = 0; i < n ; i++)
			zumba->announce();
	}
	return 0;
}