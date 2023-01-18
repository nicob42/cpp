# include "Bureaucrat.hpp"

void test1()
{
    try
    {
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        Bureaucrat B3;
        std::cout << B1;
        std::cout << B2;
        B3 = B2;
        std::cout << B3;
        Bureaucrat B4("John1", 200);
    }
    catch(std::exception e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test2()
{
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        Bureaucrat B3;
        std::cout << B1;
        std::cout << B2;
        B3 = B2;
        std::cout << B3;
        Bureaucrat B4("John1", -200);
}

void test3()
{
    try
    {
        std::cout << "-----test2-----" << std::endl;
        test2();
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
        std::cout << "-----test3-----" << std::endl;
        test3();
    }
    catch(Bureaucrat::GradeTooLowException &e) // is working
    {
        std::cerr << e.what() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << "Nothing" << std::endl;
    }
}

void test5()
{
    try
    {
        Bureaucrat B4("John1", -200);
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        Bureaucrat B3;
        std::cout << B1;
        std::cout << B2;
        B3 = B2;
        std::cout << B3;
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
    std::cout << std::endl;
    std::cout << "-----test3-----" << std::endl;
    test3();
    std::cout << std::endl;
    std::cout << "-----test4-----" << std::endl;
    test4();
    std::cout << std::endl;
    std::cout << "-----test5-----" << std::endl;
    test5();

}