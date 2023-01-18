#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
    return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
    return;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
    if(this == &rhs)
        return(*this);
    this->_target = rhs._target;
    return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src)
{
    *this = src;
    return ;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > 5)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if(this->getSigned() == false)
    {
        throw PresidentialPardonForm::NotSignedException();
    }
    std::cout << this->_target <<" are forgiven by Zaphod Beeblebrox.\n";
    return ;
}

const char *PresidentialPardonForm::NotSignedException::what() const throw()
{
    return("Not excecute because PresidentialPardonForm is not signed");
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    return ;
}
