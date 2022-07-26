#include <stdio.h>

void binary_to_ascil(unsigned int value)
{
	unsigned int quotient;
	
	quotient = value / 10;
	if(quotient != 0)
		binary_to_ascil(quotient);
	putchar(value % 10 + '0');
}
int main(void)
{
	binary_to_ascil(123321);
	return 0;
}



