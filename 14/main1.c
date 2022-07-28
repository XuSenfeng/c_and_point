#include <stdio.h>
#define DEBUG_PRINT  printf("File %s line: %d:" \
						" x=%d, y=%d, z= %d", \
						__FILE__, __LINE__, x, y, z)

int main(void)
{
	int x = 2;
	int y = 1;
	int z = 4;
	DEBUG_PRINT;
	return 0;
}



