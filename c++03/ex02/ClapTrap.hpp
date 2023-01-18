#ifndef CLAPTRAP_H

# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);

        ClapTrap &operator=(ClapTrap const & rhs);
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _Name;
        int _Hit;
        int _Energy;
        int _Attack;
};

#endif
