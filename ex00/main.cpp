#include "Zombie.hpp"

int main()
{
	std::string name;
	std::cout << "Enter name for our Zombi -> ";
	std::cin >> name;
	Zombie zumba(name);
	zumba.newZombie(name);
	// system("leaks zombie");
	return 0;
}
