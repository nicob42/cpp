#include "ScavTrap.hpp"

int main()
{
	ClapTrap john("banban");
	ClapTrap jim("nico");
	ClapTrap joe("jojo");
	ScavTrap jane("Jaja");

	john.attack("gertrude");
	john.attack("mona");
	john.attack("lisa");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	jane.attack("leo");
	jane.takeDamage(99);
	jane.beRepaired(50);
	jane.guardGate();
}
