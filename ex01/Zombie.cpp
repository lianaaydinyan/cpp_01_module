#include "Zombie.hpp"

std::string	Zombie::get_name(void)
{
	return name_;
}
void	Zombie::announce( void )
{
	std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name)
{
	this->name_ = name;
}

void	Zombie::set_name( std::string name )
{
	this->name_ = name;
}
 
Zombie::Zombie(void)
{
}

Zombie::~Zombie( void )
{
	std::cout << this->name_ << " is being deleted" << std::endl;
}
