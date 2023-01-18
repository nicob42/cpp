#ifndef ARRAY_T

# define ARRAY_T
# include "Array.hpp"
template <typename T>
class Array;
# include <iostream>

template <typename T>
Array<T>::Array(void) : _size(0), _array(new T[0])
{
    return;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
    return ;
}

template <typename T>
Array<T>& Array<T>::operator=(Array const  &rhs)
{
    if(this == &rhs)
        return(*this);
    _array = new T[rhs._size];
    for(int i = 0; i < this->_size; i++)
        this->_array[i] = rhs._array[i];
    this->_size = rhs._size;
    return(*this);
}

template <typename T>
T& Array<T>::operator[](int const n)
{
    if(n < 0 || n >= this->_size)
        throw  ArrayOutOfLimits();
    return(this->_array[n]);
}

template <typename T>
Array<T>::Array(Array const & src)
{
    *this = src;
    return ;
}
template <typename T>
const char *Array<T>::ArrayOutOfLimits::what() const throw()
{
    return("Out of limit");
}

template <typename T>
int Array<T>::size(void) const
{
    return (this->_size);
}

template <typename T>
Array<T>::~Array(void)
{
    delete [] this->_array;
    return ;
}



#endif