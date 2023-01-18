#include "Intern.hpp"


Intern::Intern(void)
{
    return;
}

Intern & Intern::operator=(Intern const & rhs)
{
    if(this == &rhs)
        return (*this);
    return(*this);
}

Intern::Intern(Intern const & src)
{
    *this = src;
    return ;
}

Form * Intern::Shrubbery(std::string target)
{
    return(new ShrubberyCreationForm(target));
}

Form * Intern::Roboto(std::string target)
{
    return(new RobotomyRequestForm(target));
}

Form * Intern::Presidential(std::string target)
{
    return(new PresidentialPardonForm(target));
}

Form * Intern::makeForm(std::string name, std::string target)
{
    int flag = 1;
    int i = 0;

    Form * (Intern::*makeForm[3]) (std::string target) = {&Intern::Shrubbery, &Intern::Roboto,
        &Intern::Presidential};
    std::string str[3]={"Shrubbery request", "Robot request", "Presidential pardon request"};
    while(i < 3 && flag)
    {
      if(name == str[i])
        flag = 0;
      else
        i++;
    }
    if(flag == 0)
    {
        std::cout << "Intern Creat a : "<< name << std::endl;
        return((this->*makeForm[i])(target));
    }
    std::cout << "No form as :" << name << std::endl ;
    return(NULL);
}

Intern::~Intern(void)
{
    return ;
}