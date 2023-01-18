#include "Form.hpp"

Form::Form(void): _name(""), _signed(0),_gradesign(0),_gradeexec(0)
{
    return ;
}

Form::Form(std::string name, int gradesign, int gradeexec) : _name(name),_signed(false),_gradesign(gradesign),_gradeexec(gradeexec)
{
    if(gradesign < 1 || gradeexec < 1)
        throw Form::GradeTooHighException();
    if(gradesign > 150 || gradeexec > 150)
        throw Form::GradeTooLowException();
}

Form & Form::operator=(Form const & rhs)
{
    if(this == &rhs)
        return(*this);
    this->_signed = rhs._signed;
    return(*this);
}

Form::Form(Form const & src) : _name(src._name),_gradesign(src._gradesign),_gradeexec(src._gradeexec)
{
    *this = src;
    return ;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
    return("Exception : too high");
}

const char * Form::GradeTooLowException::what(void) const throw()
{
    return("Exception : too Low");
}

bool Form::getSigned(void) const
{
    return(this->_signed);
}

std::string Form::getName(void) const
{
    return(this->_name);
}

int Form::getSign(void) const
{
    return(this->_gradesign);
}

int Form::getExec(void) const
{
    return(this->_gradeexec);
}

void Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() > this->_gradesign)
        throw Form::GradeTooLowException();
    this->_signed = true;
}

void Form::execute(Bureaucrat const & executor) const
{
    (void) executor;
    return ;
}

Form::~Form(void)
{
    return ;
}

std::ostream & operator<<(std::ostream & o, Form const &rhs)
{
    o << rhs.getName() << ", Form gradesign : " << rhs.getSign() << ", Signed : " << rhs.getSigned();
    o << ", Form gradeexec : " << rhs.getExec() << std::endl;
    return(o);
}
