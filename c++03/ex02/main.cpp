# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap("banban");
    ScavTrap scavtrap("nico");
    FragTrap fragtrap("Test");

    claptrap.attack("banban");
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.attack("banban");
    claptrap.beRepaired(3);
    claptrap.beRepaired(3);
    scavtrap.guardGate();
    scavtrap.attack("banban");
    fragtrap.highFivesGuys();
    fragtrap.attack("nico");

}
