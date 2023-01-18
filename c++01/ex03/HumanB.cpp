#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB(void)
{

}

void HumanB::attack(void)
{
	std::cout << this->name;
	std::cout << " attacks with their " << this->weapon->getType();
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}