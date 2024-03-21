#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    
    if(haystack == NULL || needle == NULL)
    {
        return NULL;
    }
    while(haystack[i] != '\0')
    {   
        
        if(haystack[i] == needle[j])
        {   
            j++; 
            if(needle[j] == '\0')
                return (char *)&haystack[i - 1];    
                   
        }
        else
        {
            j = 0;
        }
        i++;

    }
    return NULL;
}