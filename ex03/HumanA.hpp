#ifndef HUMANA_HPP
#define HUMANA_HPP


#include "Weapon.hpp"


class HumanA
{
	private:
		std::string	name_;
		Weapon*	weapon_;
	public:
		HumanA(std::string name,  Weapon& pew ) : name_(name), weapon_(&pew) {}
		void	setWeapon(Weapon& gun) {weapon_ =  &gun ;}
		void	setName(std::string& name) { name_ = name; }
		void	attack();
		~HumanA();
		HumanA();
};

#endif // HumanA