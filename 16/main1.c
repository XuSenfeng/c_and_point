#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(void)
{
	char *a, *b;
	a = (char *)malloc(30);
	b=a;
	time_t time_n;
	time(&time_n);
	a = ctime(&time_n);
	printf("%s", a);
	free(b);
	return 0;

}




