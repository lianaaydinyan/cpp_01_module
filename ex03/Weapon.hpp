#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <cstring>
#include <string>
#include <iomanip>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(std::string name) : type(name) {}
		const std::string& getType() const;
		void	setType(std::string str) { this->type = str;}
		Weapon();
		~Weapon();
};

#endif