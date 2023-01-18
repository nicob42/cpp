#include "ClapTrap.hpp"

int main()
{
	ClapTrap john("banban");
	ClapTrap jim("nico");
	ClapTrap joe("Jojo");

	john.attack("mona");
	john.attack("lisa");
	john.attack("leo");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
}