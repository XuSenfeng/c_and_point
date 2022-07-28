#include <stdio.h>

#define PRINT(FORMAT,VALUE)		\
		printf("The value of "#VALUE" is "FORMAT"\n", VALUE)
int main(void)
{
	int x = 1; 
	PRINT("%d", x+3);
	return 0;
}


