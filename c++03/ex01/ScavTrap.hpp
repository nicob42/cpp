#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& other);

	ScavTrap& operator=(const ScavTrap& rhs);

	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();
};
