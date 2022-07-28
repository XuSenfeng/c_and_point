#include <stdio.h>

#define PRINT(PORMAT, VALUE)			\
		printf("The value is "PORMAT"\n", VALUE)

int main(void)
{
	PRINT("%d", 23);

	return 0;
}



