#ifndef ARRAY_H
# define ARRAY_H

template <typename T>
class Array
{
    public :
        Array(void);
        Array(unsigned int);
        Array& operator=(Array const &rhs);
        Array(Array const &src);
        ~Array(void);
        T& operator[](int const n);
        int size(void) const;
        class ArrayOutOfLimits : public std::exception
        {
            public:
            virtual const char *what() const throw();
        };
    private:
        T *_array;
        int _size;
};

#endif
