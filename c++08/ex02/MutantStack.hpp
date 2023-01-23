#ifndef MUTANTSTACK_H

# define MUTANTSTACK_H
# include <stack>
# include <list>
# include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
    public :
        MutantStack(void)
        {
            return ;
        }
        MutantStack & operator=(MutantStack const &rhs)
        {
            this->c = rhs.c;
            return(*this);
        }
        MutantStack(MutantStack const &src)
        {
            *this = src;
            return ;
        }
        ~MutantStack(void)
        {
            return ;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin()
        {
            return (this->c.begin());
        }
        iterator end()
        {
            return (this->c.end());
        }
    private :
};


#endif
