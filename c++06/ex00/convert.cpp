#include "convert.hpp"

void Tochar(double nbr)
{
    if(nbr >= 32 &&  nbr <= 126 )
        std::cout << "char: '" << static_cast<char>(nbr) << "'" << std::endl;
    else if((nbr < 32 && nbr >= 0) || nbr == 127)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
    return ;
}

void Toint(double nbr)
{
    if( nbr < std::numeric_limits<int>::min()  ||  nbr > std::numeric_limits<int>::max() || std::isnan(nbr))
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nbr) << std::endl;
    return ;
}

void Tofloat(double nbr)
{
    if(nbr == std::floor(nbr) && !std::isinf(nbr))
        std::cout << "float: " << static_cast<float>(nbr) << ".0f" <<std::endl;
    else
        std::cout << "float: " << static_cast<float>(nbr) << "f" << std::endl;
    return ;
}

void Todouble(double nbr)
{
    if(nbr == std::floor(nbr) && !std::isinf(nbr))
        std::cout << "double: " << static_cast<double>(nbr) << ".0" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(nbr) << std::endl;
    return ;
}

void Convert(double nbr)
{
    Tochar(nbr);
    Toint(nbr);
    Tofloat(nbr);
    Todouble(nbr);
    return ;
}