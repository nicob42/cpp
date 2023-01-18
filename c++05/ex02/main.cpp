# include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test1()
{
    try
    {
        ShrubberyCreationForm F1("form1");
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        std::cout << B1;
        std::cout << B2;
        B1.signForm(F1);
        B2.executeForm(F1);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test2()
{
    try
    {
        RobotomyRequestForm  F1("form1");
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        std::cout << B1;
        std::cout << B2;
        B1.signForm(F1);
        B2.executeForm(F1);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test3()
{
    try
    {
        PresidentialPardonForm F1("form1");
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 5);
        std::cout << B1;
        std::cout << B2;
        B1.signForm(F1);
        B2.executeForm(F1);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test4()
{
    try
    {
        PresidentialPardonForm F1("form1");
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        std::cout << B1;
        std::cout << B2;
        B1.signForm(F1);
        B2.executeForm(F1);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test5()
{
    try
    {
        PresidentialPardonForm F1("form1");
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 5);
        std::cout << B1;
        std::cout << B2;
        B1.signForm(F1);
        B1.signForm(F1);
        B2.executeForm(F1);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    std::cout << "-----test1-----" << std::endl;
    test1();
    std::cout << "\n-----test2-----" << std::endl;
    test2();
    std::cout << "\n-----test3-----" << std::endl;
    test3();
    std::cout << "\n-----test4-----" << std::endl;
    test4();
    std::cout << "\n-----test1-----" << std::endl;
    test5();

}