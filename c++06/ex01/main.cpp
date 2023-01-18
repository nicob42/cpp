#include "serialize.hpp"

int main(void)
{
    Data* ptr = new Data;
    uintptr_t raw;
    ptr->i = 48;

    std::cout << ptr << std::endl;
    raw = serialize(ptr);
    std::cout << deserialize(raw) << std::endl;
    std::cout << ptr->i << std::endl;
    delete ptr;
}