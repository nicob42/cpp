#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{

    return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
    if(this == &rhs)
        return(*this);
    this->_target = rhs._target;
    return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
{
    *this = src;
    return;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    if(executor.getGrade() > 45)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if(this->getSigned()== false)
    {
        throw RobotomyRequestForm::NotSignedException();
    }
    std::cout << "bruit de perceuse\n" << this->_target <<" 50% robotised succed\n";
    return ;
}

const char * RobotomyRequestForm::NotSignedException::what() const throw()
{
    return("Not excecute because RobotomyRequestForm is not signed robotised failed");
}


RobotomyRequestForm::~RobotomyRequestForm(void)
{
    return ;
}
