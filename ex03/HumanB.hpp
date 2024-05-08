#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name_;
		Weapon*		weapon_ ;
	public:
		HumanB();
		~HumanB();
		void	attack();
		HumanB(std::string name) : name_(name) {}
		void	setWeapon(Weapon& gun) {weapon_ =  &gun ;}

};



#endif // HumanB