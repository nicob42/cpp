# include "convert.hpp"

int main(int argc, char **argv)
{
    double val;
    if (argc == 2)
    {
        if(strlen(argv[1]) == 1 && !isdigit(*argv[1]))
         val = static_cast<double>(*argv[1]);
        else
         val = std::strtod(argv[1], NULL);
        Convert(val);
    }
    else
        std::cout << "Invalid arguments.\n";

    return(0);
}