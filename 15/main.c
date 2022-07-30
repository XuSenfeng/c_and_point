#include <stdio.h>
#include <stdlib.h>
FILE *input;
int main(void)
{
	input = fopen("data3", "r");
	if(input == NULL)
	{
		perror("data3");
		exit(EXIT_FAILURE);
	}
}


