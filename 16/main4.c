#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

jmp_buf restart;
void func(void)
{
	printf("func\n");
	longjmp(restart, 1);
	printf("below\n");
}
int main(void)
{
	int value;
	value = setjmp(restart);
	if(value == 0)
	{
		printf("value = 0\n");
		func();
	}
	else if(value == 1)
		printf("value =1\n");
	return 0;
}






