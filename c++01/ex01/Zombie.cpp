#include "Zombie.hpp"

Zombie::Zombie(void)
{

}

void Zombie::GiveName(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << "le zombie " << this->name << " est mort... :'(" << std::endl;
}
void	Zombie::announce(void)
{
	std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}