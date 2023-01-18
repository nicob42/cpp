#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base * generate(void)
{
    int ran;

    srand (time(NULL));
    ran = rand() % 3;
    if(ran == 0)
    {
        std::cout << "Create A\n";
        return(new A());
    }
    else if(ran == 1)
    {
        std::cout << "Create B\n";
        return(new B());
    }
    else
    {
        std::cout << "Create C\n";
        return(new C());
    }
}

void identify(Base* p)
{
    A* a = dynamic_cast<A*>(p);
    if(a == NULL)
    {}
    else
    {
        std::cout << "\"A\"\n";
    }
    B* b = dynamic_cast<B*>(p);
    if(b == NULL)
    {}
    else
    {
        std::cout << "\"B\"\n";
    }
    C* c = dynamic_cast<C*>(p);
    if(c == NULL)
    {}
    else
    {
        std::cout << "\"C\"\n";
    }
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << "\"A\"\n";
    }
    catch(std::bad_cast &bc)
    {}
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << "\"B\"\n";
    }
    catch(std::bad_cast &bc)
    {}
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << "\"C\"\n";
    }
    catch(std::bad_cast &bc)
    {}
}

int main(void)
{
    Base* base = generate();
    identify(base);
    identify(*base);
    delete(base);
    return(0);
}