#include "Span.hpp"

void test1(void)
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(4);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test2(void)
{
    try
    {
        Span sp = Span(4);
        sp.addNumber(4);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test3(void)
{
    try
    {
        Span sp = Span(4);
        sp.addNumber(4);
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void test4(void)
{
    try
    {
        Span sp = Span(50);
        sp.rangeaddNumber(2, 50);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
        sp.Display();
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

int main(void)
{
    std::cout << "\ntest1\n";
    test1();
    std::cout << "\ntest2\n";
    test2();
    std::cout << "\ntest3\n";
    test3();
    std::cout << "\ntest4\n";
    test4();
    std::cout << "\n";
    return 0;
}
