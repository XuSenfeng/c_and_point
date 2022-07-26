#include <stdio.h>

int main()
{
	char a, b, c;
	a = 0;
	b = 0xfc;
	a = (b<<1);
	printf("a = %u",a);
	a = (b<<1)|0x07;
	printf("a = %u", a);
	a = ((b<<1)|0x07)>>1;
	printf("a = %u\n", a);
	return 0;
}



