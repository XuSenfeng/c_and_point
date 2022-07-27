#include "malloc.h"

int main(void)
{
	int *new_memory;
	new_memory  = MALLOC(25, int);
	printf("%p\n", new_memory);
	free(new_memory);
	return 0;
}





