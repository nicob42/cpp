#include "iter.hpp"

int main(void)
{
    int nb[10] = {0,1,2,3,4,5,6,7,8,9};
    const char *b = "Bonjour";
    iter(b, strlen(b), display);
    iter(nb, sizeof(nb)/ sizeof(nb[0]), display);
}
