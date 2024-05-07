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
	Zombie(void);
	~Zombie( void );
	Zombie(std::string name);
	std::string	get_name( void );
	void		randomChump( std::string name );
	void		announce( void );
	void		set_name( std::string name );
	Zombie*		zombieHorde( int N, std::string name );
};


#endif //Zombie_hpp