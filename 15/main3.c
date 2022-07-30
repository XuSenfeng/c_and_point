#include <stdio.h>

#define MAX_LINE_LENGTH
void copylines(FILE *input, FILE *output)
{
	char buffer[MAX_LINE_LENGEH];
	while(fgets(buffer, MAX_LINE_LENGTH, input) != NULL)
		fputs(buffer, output);
}


