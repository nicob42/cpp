#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
    std::cout << "Default Constructor  FragTrap has been call" << std::endl;
    return;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Attack = 30;
    std::cout << "Default Constructor  FragTrap has been call" << std::endl;
    return ;
}

FragTrap & FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << "Assignement FragTrap has been call" <<std::endl;
    if(this == &rhs)
        return(*this);
    this->_Name = rhs._Name;
    this->_Hit = rhs._Hit;
    this->_Energy = rhs._Energy;
    this->_Attack = rhs._Attack;
    return(*this);
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "Copy FragTrap has been call" <<std::endl;
    *this = src;
    return ;
}

void FragTrap::highFivesGuys(void)
{
    std::string tmp;
    std::cout << "HightFives ?" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "Destructor FragTrap has been call" <<std::endl;
    return;
}
