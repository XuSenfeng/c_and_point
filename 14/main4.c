#include <stdio.h>

#define ADD_TO_SUM(sum_number, value)		\
	sum ## sum_number += value

int main(void)
{
	int sum2 = 1;
	ADD_TO_SUM(2, 45);
	printf("%d\n", sum2);
}


