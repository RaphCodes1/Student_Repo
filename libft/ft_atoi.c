#include "libft.h"

int ft_atoi(const char *nptr)
{
    int i;
    int conv;
    int c;

    conv = 1;
    i = 0;
    c = 0;
    while(nptr[i] == 32 ||(nptr[i] <= 13 && nptr[i] >= 9))
    {
        i++;
    }
    if(nptr[i] == '-')
    {
        conv *= -1;
        i++;
    }
    if(nptr[i] == '+')
        i++;
    while(nptr[i] >= '0' && nptr[i] <= '9')
    {
        c = c * 10 + nptr[i] - '0';
        i++;
    }
    return (c * conv);
}