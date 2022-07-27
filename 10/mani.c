#include <stdio.h>
#include <stddef.h>
struct A{
	int a;
	short b;
	char  c;
}a;

int main(void)
{
	printf("%d\n", offsetof(struct A, a));
	printf("%d\n", offsetof(struct A, b));
	printf("%d\n", offsetof(struct A, c));
}




