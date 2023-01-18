# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    return ;
}

Bureaucrat::Bureaucrat(std::string name, int i): _name(name)
{
    if(i < 1)
        throw Bureaucrat::GradeTooHighException();
    if(i > 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade = i;
    return ;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if(this == &rhs)
        return(*this);
    this->_grade = rhs._grade;
    return(*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): _name(src._name)
{
    *this = src;
    return ;
}

std::string Bureaucrat::getName(void) const
{
    return(this->_name);
}

int Bureaucrat::getGrade(void) const
{
    return(this->_grade);
}

void Bureaucrat::upGrade(void)
{
    if(this->_grade == 1)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
    return ;
}

void Bureaucrat::downGrade(void)
{
    if(this->_grade == 150)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
    return ;
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
    return("Exception  : GradeTooHigh");
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
    return("Exception : GradeTooLow");
}

void Bureaucrat::signForm(Form &f)
{
    if(f.getSigned() == true)
    {
        std::cout << " Already signed " << f.getName() << std::endl;
        return ;
    }

    if(this->_grade > f.getSign())
    {
        std::cout << this->_name << " couldn’t sign " << f.getName() << " because too low" << std::endl;
        return ;
    }

    std::cout << this->_name << " signed " << f.getName() << std::endl;
    f.beSigned(*this);
}

Bureaucrat::~Bureaucrat(void)
{
    return ;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.getName() << " , bureaucrat grade " << rhs.getGrade() << std::endl;
    return(o);
}
