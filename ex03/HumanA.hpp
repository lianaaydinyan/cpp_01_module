#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"


class HumanA
{
	private:
		std::string	name_;
		Weapon*	weapon_;
	public:
		HumanA();
		~HumanA();
		void	attack();
		void	setWeapon(Weapon& gun) {weapon_ =  &gun ;}
		void	setName(std::string& name) { name_ = name; }
		HumanA(std::string name,  Weapon& pew ) : name_(name), weapon_(&pew) {}
};

#endif // HumanA