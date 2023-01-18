# include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    std::cout << "Default Constructor  ScavTrap has been call" <<std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "Default Constructor  ScavTrap has been call" << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Assignement ScavTrap has been call" <<std::endl;
    if(this == &rhs)
        return(*this);
    this->_Name = rhs._Name;
    this->_Hit = rhs._Hit;
    this->_Energy = rhs._Energy;
    this->_Attack = rhs._Attack;
    return(*this);
}

ScavTrap::ScavTrap (ScavTrap const & src)
{
    std::cout << "Copy ScavTrap has been call" <<std::endl;
    *this = src;
    return ;
}

void ScavTrap::guardGate(void)
{
    std::cout << "Mode Gate keeper" <<std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->_Hit <= 0 || this->_Energy <= 0)
    {
            std::cout << "You can't attack, you are dead or empty energy" << std::endl;
            return ;
    }
    this->_Energy--;
    std::cout << "ScavTrap "<< this->_Name << " attacks " << target <<", causing "<< this->_Attack << " points of damage!" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "Destructor ScavTrap has been call" <<std::endl;
    return ;
}
