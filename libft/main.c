#include <stdio.h>
#include "libft.h"
#include <string.h>

int main(void)
{   
    char *t1 = "Hello there world";
    char *t2 = strdup(t1);
    printf("%s\n",t2);
}