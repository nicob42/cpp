#include "Zombie.hpp"

int	main(void)
{
	std::string name;

	std::cout << "Un Zombie a spawn dans la stack" << std::endl;
	std::cout << "Nom du Zombie : " << std::flush;
	std::cin >> name;

	Zombie *zombi1 = newZombie(name);
	zombi1->announce();
	delete zombi1;

	std::cout << "Un Zombie a spawn dans la heap" << std::endl;
	std::cout << "Nom du Zombie : " << std::flush;
	std::cin >> name;

	Zombie *zombi2 = newZombie(name);
	zombi2->announce();
	delete zombi2;

	std::cout << "reveil du zombie random" << std::endl;
	randomChump("Banban");
	return(0);
}