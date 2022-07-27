#include <stdio.h>
#include <string.h>
int main(void)
{
	char *a = "##########";
	char *b = "###############";
	if(strlen(a) - strlen(b) >= 0)
		printf("longer\n");
	else
		printf("short\n");
	return 0;
}
