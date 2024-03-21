#include "libft.h"
#include <stdlib.h> 

char *ft_strstr(const char *haystack, const char *needle)
{
    int i = 0;
    int j = 0;
    int matchIndex = -1; // Index to track the start of the matching substring
    
    // Check for NULL pointers
    if (haystack == NULL || needle == NULL)
        return NULL;
    
    // Iterate through the haystack
    while (haystack[i] != '\0')
    {
        // If needle matches haystack, store the match index
        if (haystack[i] == needle[j])
        {
            if (j == 0)
                matchIndex = i;
            
            j++;
            // If the entire needle is matched, return the start index
            if (needle[j] == '\0')
                return (char *)&haystack[matchIndex];
        }
        else
        {
            // If a partial match fails, reset j and matchIndex
            j = 0;
            matchIndex = -1;
        }
        
        i++;
    }
    
    return NULL; // No match found
}