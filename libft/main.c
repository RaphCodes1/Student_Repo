#include <stdio.h>
#include "libft.h"
#include <string.h>

int main() {
    const char haystack[] = "Hello, world!";
    const char needle[] = "wo";

    // Search for the first occurrence of the substring
    char *result = ft_strstr(haystack, needle);
    char *result2 = strstr(haystack, needle);

    if (result != NULL) {
        printf("'%s' found at index %ld in '%s'\n", needle, result - haystack, haystack);
        printf("%s\n",result);
        printf("%s\n",result2);
    } else {
        printf("'%s' not found in '%s'\n", needle, haystack);
    }

    return 0;
}


