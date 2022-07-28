#include <stdio.h>
void binary_to_ascii(unsigned int value)
{
    unsigned int quotient;

    quotient = value / 16;
    if(quotient != 0)
        binary_to_ascii(quotient);
    putchar("0123456789abcdef"[value %16]);
}

int main(void)
{
	binary_to_ascii(78);
	return 0;
}



