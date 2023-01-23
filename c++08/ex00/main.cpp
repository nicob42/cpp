#include "easyfind.hpp"

int main(void)
{
    int myints[] = { 10, 20, 30, 40 };
    int str[4] = {'a', 'b', 'c', 'd'};
    std::vector<int> myvector (myints,myints+4);
    std::list<int> test(str,str+4);
    easyfind(myvector, 20);
    easyfind(test, 'd');

}