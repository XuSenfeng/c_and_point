#include <stdio.h>

void test(int n)
{
	switch(n)
	{
		case 1:
			printf("1\n");
			break;
		case 2:
			printf("2\n");
		default:
			printf("over\n");
		case 3:
			printf("3\n");
	}
}
int main(void)
{
	test(1);
	printf("\n\n\n");
	test(2);
	printf("\n\n\n");
	test(3);
	printf("\n\n\n");
	test(4);

}

