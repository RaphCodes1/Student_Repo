#include "libft.h"

char *ft_strcpy(char *dest,const char *src)
{
    int i;

    i = 0;
    if(dest == NULL || src == NULL)
    {
        return NULL;
    }
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}