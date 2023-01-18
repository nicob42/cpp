# include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void test1()
{
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("Robot request", "Bender");
    delete rrf;
}

void test2()
{
    Bureaucrat B1("John",5);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("Presidential pardon request", "Bender");
    B1.signForm(*rrf);
    B1.executeForm(*rrf);
    delete rrf;
}

void test3()
{
    Bureaucrat B1("John",5);
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("No exist", "Bender");
    if(rrf)
    {
        B1.signForm(*rrf);
        B1.executeForm(*rrf);
    }
    delete rrf;
}

int main(void)
{
    std::cout << "-----test1-----" << std::endl;
    test1();
    std::cout << "\n-----test2-----" << std::endl;
    test2();
    std::cout << "\n-----test3-----" << std::endl;
    test3();
}