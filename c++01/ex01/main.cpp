#include "Zombie.hpp"

int	main(void)
{
	size_t N;
	std::cout << "choisis le nombre de zombie" << std::endl;
	std::cin >> N;
	if (N <= 100000)
	{
		Zombie *zombite = zombieHorde(N, "zombozord");
		for (size_t i = 0; i < N; i++)
		{
			zombite[i].announce();
		}
		delete [] zombite;
		return(0);
	}
	else
		std::cout << "valeur trop haute" << std::endl;
	return(0);
}