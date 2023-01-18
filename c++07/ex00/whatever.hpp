#ifndef WHATEVER_H
# define WHATEVER_H

template<class T> void swap(T& x, T& y)
{
    T tmp;
    tmp = x;
    x = y;
    y = tmp;
}

template<class T> const T& min(const T &a, const T &b)
{
    return( a >= b ? b:a);
}

template<class T> const T& max(const T &a, const T &b)
{
    return( a > b ? a:b);
}

#endif