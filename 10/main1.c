#include <stdio.h>
struct A{
	char a :1;
	char b :2;

}aa;
int main(void)
{
	aa.a = 1;
	aa.b = 2;
	printf("%d\n", aa);
}


