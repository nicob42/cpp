
#include "MutantStack.hpp"

void test1(void)
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
}

void test2(void)
{
    std::list<int> mylist;
    mylist.push_front(5);
    mylist.push_front(17);
    std::cout << mylist.front() << std::endl;
    mylist.pop_front();
    std::cout << mylist.size() << std::endl;
    mylist.push_back(3);
    mylist.push_back(5);
    mylist.push_back(737);
    mylist.push_back(0);
    for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
        std::cout << *it << std::endl;
}


int main()
{
    test1();
    std::cout << "\n-----test2(list)-----\n";
    test2();
    return(0);
}
