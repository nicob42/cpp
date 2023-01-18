#include "Replace.hpp"

int	error(std::string msg)
{
	std::cerr << msg << std::endl; // cerr = sortie erreur standard
	return (1);
}

// Gestions des erreurs potentielles
int	main(int ac, char **av)
{
	Replace	replace;
	if (ac < 4)
		return (error("Erreur: pas assez d'arguments."));
	if (ac > 4)
		return (error("Erreur: trop d'arguments."));
	if (!replace.setName(av[1]))
		return (error("Erreur: le fichier n'est pas valide"));
	if (!replace.replace(av[2], av[3]))
		return (error("Erreur: les chaines n'ont pas pu être remplacées"));
	return (0);
}