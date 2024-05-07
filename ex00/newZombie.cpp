#include "Zombie.hpp"

Zombie*	Zombie::newZombie( std::string name )
{
	Zombie*	zumba = new Zombie(name);
	zumba->set_name(name);
	zumba->announce();
	return zumba;
}