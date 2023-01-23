#ifndef SPAN_H

# define SPAN_H
# include <iostream>
#include <vector>

class Span
{
    public:
            Span(void);
            Span(unsigned int size);
            Span & operator=(Span const &rhs);
            Span(Span const &src);
            ~Span(void);
            void addNumber(int n);
            unsigned int shortestSpan(void);
            unsigned int longestSpan(void);
            void rangeaddNumber(int iterator, unsigned int size);
            void Display(void);
            class ExceptionOut : public std::exception
            {
            public:
                virtual const char* what() const throw();
            };
    private:
        unsigned int _size;
        unsigned int _index;
        std::vector<int> _vector;

};

#endif
