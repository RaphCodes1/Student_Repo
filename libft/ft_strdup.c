#include "libft.h"

char *strdup(const char *s1)
{
    int i;
    char *dest;

    i = 0;
    dest = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
    if(!dest)
    {
        return NULL;
    }
    while(s1[i] != '\0')
    {
        dest[i] = s1[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}