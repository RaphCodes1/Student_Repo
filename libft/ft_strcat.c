#include "libft.h"

char *ft_strcat(char *restrict s1,const char *restrict s2)
{
    int i;
    int j;

    i = 0;
    j = ft_strlen(s1);
    if(s1 == NULL || s2 == NULL)
    {
        return NULL;
    }
    while(s2[i] != '\0')
    {
        s1[i + j] = s2[i];
        i++;
    }
    s1[i + j] = '\0';
    return (s1);
}
