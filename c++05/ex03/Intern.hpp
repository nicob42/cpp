#ifndef INTERN_H

# define INTERN_H
# include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern(void);
        Intern & operator=(Intern const &rhs);
        Intern(Intern const &src);
        ~Intern(void);
        Form * makeForm(std::string nameform, std::string targetform);
        Form * Shrubbery(std::string target);
        Form * Roboto(std::string target);
        Form * Presidential(std::string target);
    private:
};



#endif
