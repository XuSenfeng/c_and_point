#include <stdio.h>
#include "stack.h"

int main(void)
{
	create_stack(20);
	push(10);
	push(20);
	printf("%d\n", top());
	destory_stack();
	return 0;

}



