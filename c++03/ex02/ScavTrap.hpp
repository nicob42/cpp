#ifndef SCAVTRAP_H

# define SCAVTRAP_H
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap & operator=(ScavTrap const & rhs);
        ScavTrap(ScavTrap const & src);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        void attack(const std::string& target);
        void guardGate(void);
    private:
	
};
#endif
