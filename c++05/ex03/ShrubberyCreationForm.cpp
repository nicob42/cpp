#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137), _target("")
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    return ;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
    if(this == &rhs)
        return(*this);
    this->_target = rhs._target;
    return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
{
    *this = src;
    return ;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::string name;
    std::ofstream outputFile;
    std::string str;
    str =   "*\n"
            "***\n"
            "/ /n"
           "/o  /+n"
        "+ /     /|   \n"
        "|/  +  o /      \n"
        "/   |     / + \n"
       "/        o  /| \n"
    "+ /  o   +      /     \n"
    "|/       |   o   / +    \n"
    "/      o          /|   \n"
 "+ /   o      o   o    /  \n"
 "|/__              +  __/   \n"
  "+ /   +  o       |  / +\n"
  "|/    |        o     /|\n"
"+ /            +        /\n"
"|/    o    o   |         / +\n"
"/__    +           o  + __/|\n"
"+ /    |        o     | / +\n"
"|/ o        o       o    /|\n"
"/___________   ___________/\n"
            "| |\n"
            "|_|\n";
    if(executor.getGrade() > 137)
    {
        throw Bureaucrat::GradeTooLowException();
    }
    if(this->getSigned() == false)
    {
        throw ShrubberyCreationForm::NotSignedException();
    }
    name = this->_target;
    name.append("_shrubbery");
    outputFile.open(name, std::ofstream::out);
    if(outputFile.fail())
    {
      std::cerr << "Fail open file";
      return ;
    }
    outputFile << str;
    outputFile.close();
    return ;
}

const char * ShrubberyCreationForm::NotSignedException::what() const throw()
{
    return("Not excecute because ShrubberyCreationForm is not signed");
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    return ;
}