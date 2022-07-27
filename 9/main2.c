#include <stdio.h>
#include <string.h>

void print_tokens(char *line)
{
	static char *whitespace = " \t\n\f\r\v";
	char *token;
//	printf("%s\n", line);
	for(token = strtok(line, whitespace);
	token != NULL;
	token = strtok(NULL, whitespace))
		printf("Next token is %s\n",token);

}

int main(void)
{
	char *token;
	char line[60] ="	wocao2 666 zhesha\n gg";
	print_tokens(line);
	printf("----\n");
	printf("%s", line);
}







