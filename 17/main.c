#include <stdio.h>
#include "stack.h"

int main(void)
{
	push(10);
	push(20);
	printf("%d\n", top());
	return 0;

}



