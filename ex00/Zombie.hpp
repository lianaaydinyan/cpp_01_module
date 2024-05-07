#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

class Zombie
{
private:
	std::string name_;

public:
	Zombie(std::string name) : name_(name) {}
	Zombie*		newZombie( std::string name );
	std::string	get_name( void );
	void		randomChump( std::string name );
	void		announce( void );
	void		set_name( std::string name );
	~Zombie( void );
};

#endif //Zombie_hpp