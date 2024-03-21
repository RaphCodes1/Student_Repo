#include "libft.h"

size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = ft_strlen(src);
    
    if(dst == NULL || src == NULL)
    {
        return NULL;
    }
    if(dstsize <= i)
    {
        return j + dstsize;
    }
    
    while(src[i] != '\0')
    {
        dst[i + j] = src[i];
        i++;
    }

    dst[i + j] = '\0';

    k = i + j;

    return k;
}