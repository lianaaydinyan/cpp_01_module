#include "HumanA.hpp"

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::cout << this->name_ << " attacks with their " << this->weapon_->getType() << std::endl;
}
HumanA::HumanA()
{}