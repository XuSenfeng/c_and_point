#include <stdio.h>

int main(void)
{
	int a=0;
	int b=2;
	printf("sizeof %d\n", sizeof(a=a+b));
	printf("a = %d\n", a);
	return 0;
}
