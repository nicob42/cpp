#ifndef EASYFIND_H

# define EASYFIND_H
# include <iostream>
#include <algorithm>
#include <vector>
#include <list>

class ExpectionNotFound : std::exception
{
    public:
        virtual const char* what() const throw()
        {
            return ("Not Found");
        };
};

template <typename T>
void easyfind(T val, int nb)
{
    typename T::iterator p;
    p = std::find(val.begin(), val.end(), nb);
    if ( p != val.end())
        std::cout << "Element found in my container: " << *p << '\n';
    else
        throw   ExpectionNotFound();
}

#endif