#include "libft.h"

char *ft_strncat(char *restrict s1, char *restrict s2, size_t n)
{
    size_t i;
    size_t j;

    i = 0;
    j = ft_strlen(s2);
    if(s1 == NULL || s2 == NULL)
    {
        return NULL;
    }
    while(s2[i] != '\0' && i < n)
    {
        s1[i + j] = s2[i];
        i++;
    }
    s1[i + j] = '\0';
    return (s1);
}