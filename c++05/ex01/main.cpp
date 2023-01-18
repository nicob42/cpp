# include "Bureaucrat.hpp"

void test1()
{
    try
    {
        Form F1("form1", 4,10);
        Form F2("form2", 20,10);
        Bureaucrat B1("John", 5);
        Bureaucrat B2("John1", 10);
        std::cout << B1;
        std::cout << B2;
        std::cout << F1;
        B1.signForm(F2);
        B1.signForm(F2);
        B1.signForm(F1);
        Bureaucrat B4("John1", 200);
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

}