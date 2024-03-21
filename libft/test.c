#include <stdio.h>
#include <stdlib.h>

char test(char *c)
{	
	int i = 2;
	return c[i];
}
int main(void)
{
	char *t1 = "-12345";
	int t2 = atoi(t1);
	printf("%d",t2);

}
