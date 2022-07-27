#include <stdio.h>
#include <string.h>

int main(void)
{
	int len1,len2;
	char buffer[] = "25,142,330,Smith,J,223-4123";

	len1 = strspn(buffer, "0123456789");//返回值为2
	len2 = strspn(buffer, ",1234567890");//返回值为11
	printf("%d\n", len1);
	printf("%d\n", len2);
	return 0;
}




