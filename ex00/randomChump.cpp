#include "Zombie.hpp"

void		Zombie::randomChump(std::string name )
{
	Zombie*	zumba = new Zombie(name);
	zumba->set_name(name);
	zumba->announce();
}