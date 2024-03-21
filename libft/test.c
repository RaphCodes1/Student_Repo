#include <stdio.h>

char test(char *c)
{	
	int i = 2;
	return c[i];
}
int main(void)
{
	char *t1 = "Hello";
	char t2 = test(t1);
	printf("%c",t2);
}
