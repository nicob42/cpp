#ifndef SERIALIZE_H

# define SERIALIZE_H
# include <iostream>

typedef struct s_data
{
    int i;
    char test;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif