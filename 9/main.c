#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1 = "hello world\0";
	char *str2 = "abcde\0";
	char *str3 = "wor\0";
	printf("-----strpbrk-----\n");
	printf("%d\n", strpbrk(str1,str2));
	printf("%d\n", strpbrk(str1,str3));
	printf("-----strstr-----\n");
	printf("%d\n", strstr(str1,str2));
	printf("%d\n", strstr(str1,str3));
}





