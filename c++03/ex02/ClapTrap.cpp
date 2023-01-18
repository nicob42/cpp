#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_Name(name),_Hit(10),_Energy(10),_Attack(0)
{
    std::cout << "Default Constructor has been call" <<std::endl;
    return;
}

ClapTrap::ClapTrap(void): _Hit(10),_Energy(10),_Attack(0)
{
    std::cout << "Default Constructor has been call" <<std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "Copy Constructor has been call" <<std::endl;
    *this = src;
    return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Copy Assignement operator called" <<std::endl;
    if(this == &rhs)
     return(*this);
    this->_Name = rhs._Name;
    this->_Hit = rhs._Hit;
    this->_Energy = rhs._Energy;
    this->_Attack = rhs._Attack;
    return(*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "Destructor has been call" <<std::endl;
    return;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->_Hit <= 0 || this->_Energy <= 0)
    {
            std::cout << "You can't attack, you are dead or empty energy" << std::endl;
            return ;
    }
    this->_Energy--;
    std::cout << "ClapTrap "<< this->_Name << " attacks " << target <<", causing "<< this->_Attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_Hit <= 0)
    {
        std::cout << "You can't take damage you are dead" << std::endl;
        return ;
    }
    this->_Hit -= amount;
    std::cout << "ClapTrap "<< this->_Name << " takes " << amount <<" of damages" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Hit <= 0 || this->_Energy <= 0)
    {
        std::cout << "You can't attack, you are dead or empty energy" << std::endl;
        return ;
    }
    this->_Hit += amount;
    this->_Energy--;
    std::cout << "ClapTrap "<< this->_Name << " regen " << amount <<" of life" << std::endl;
}
