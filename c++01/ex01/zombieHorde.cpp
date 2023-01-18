#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombite = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombite[i].GiveName(name);
	}
	return zombite;
}