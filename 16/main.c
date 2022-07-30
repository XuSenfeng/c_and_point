#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *b;
	long int a;
	char **c = &b;
	a = strtol("590bear", c, 12);
	printf("%ld\n", a);
	a = strtol("0x123", c, 0);
	printf("%ld\n", a);
	a = strtol("00101", c, 2);
	printf("%ld\n", a);
	return 0;
}




