#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int exit_status = EXIT_SUCCESS;
	FILE *input;
	while(*++av != NULL)
	{
		input  = fopen(*av, "r");
		if(input == NULL)
		{
			perror(*av);
			exit_status = EXIT_FAILURE;
			continue;
		}
		fputc("abc", input);
		putchar("abc");
		if(fclose(input) != 0)
		{
			perror("fclose");
			exit(EXIT_FAILURE);
		}
	}
	return exit_status;
}



