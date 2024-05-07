#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name_;
		Weapon*		weapon_ ;
	public:
		HumanB(std::string name) : name_(name) {}
		HumanB(std::string name,  Weapon& pew ) : name_(name), weapon_(&pew) {}
		void	setWeapon(Weapon& gun) {weapon_ =  &gun ;}
		void	attack();
		~HumanB();
		HumanB();

};



#endif // HumanB