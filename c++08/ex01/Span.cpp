#include "Span.hpp"

Span::Span(void): _size(0), _index(0)
{
    return;
}

Span::Span(unsigned int n) : _size(n), _index(0)
{
    return ;
}

Span & Span::operator=(Span const &rhs)
{
    if(this == &rhs)
        return (*this);
    this->_size = rhs._size;
    this->_index = rhs._index;
    for (int i = 0; i < rhs._size; i++)
        this->_vector[i] = rhs._vector[i];
    return(*this);
}

Span::Span(Span const &src)
{
    *this = src;
    return ;
}

void Span::addNumber(int nb)
{
    if(this->_index >= this->_size)
        throw ExceptionOut();
    this->_vector.push_back(nb);
    this->_index++;
    return ;
}

unsigned int Span::shortestSpan(void)
{
    std::vector<int> tmp;

    tmp = this->_vector;
    if(this->_size <= 1 || this->_index <= 1)
        throw ExceptionOut();
    std::sort(tmp.begin(), tmp.end());
    unsigned int j = tmp[1] - tmp[0];
    for (int i = 0; i < this ->_index - 1; i++)
    {
        if(tmp[i + 1] - tmp [i] < j)
            j = tmp[i + 1] - tmp [i];
    }
    return(j);
}

unsigned int Span::longestSpan(void)
{
    if(this->_size <= 1 || this->_index <= 1)
        throw ExceptionOut();
    return (*std::max_element(this->_vector.begin(), this->_vector.end()) - * std::min_element(this->_vector.begin(), this->_vector.end()));
}

void Span::rangeaddNumber(int iterator, unsigned int size)
{
    if (this->_index + size > this->_size)
        throw ExceptionOut();
    int j;
    if(this->_index >= 1)
    {
        j = this->_vector[this->_index - 1];
        j += iterator;
    }
    else
        j = iterator;
    for (unsigned int i = 0; i < size; i++)
    {

        this->_vector.push_back(j);
        this->_index++;
        j += iterator;
    }
}

void Span::Display(void)
{
    for(int i = 0; i < this->_size; i++)
    {
        std::cout << this->_vector[i] << " ";
    }
}

const char * Span::ExceptionOut::what(void) const throw()
{
    return("Bad implementation");
}

Span::~Span(void)
{
    return ;
}