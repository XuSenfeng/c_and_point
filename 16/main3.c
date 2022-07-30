#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	time_t t;
	char *c, *b;
	struct tm *p;
	c = (char *)malloc(40);
	b=c;
	time(&t);
	p = localtime(&t);
	
	strftime(c, 40, "a = %a\n", p);
	printf("%s", c);
	strftime(c, 40, "A = %A\n", p);
	printf("%s", c);
	strftime(c, 40, "b = %b\n", p);
	printf("%s", c);
	strftime(c, 40, "B = %B\n", p);
	printf("%s", c);
	strftime(c, 40, "c = %c\n", p);
	printf("%s", c);
	strftime(c, 40, "d = %d\n", p);
	printf("%s", c);
	strftime(c, 40, "H = %H\n", p);
	printf("%s", c);
	strftime(c, 40, "I = %I\n", p);
	printf("%s", c);
	strftime(c, 40, "J = %J\n", p);
	printf("%s", c);
	strftime(c, 40, "m = %m\n", p);
	printf("%s", c);
	strftime(c, 40, "M = %M\n", p);
	printf("%s", c);
	strftime(c, 40, "P = %P\n", p);
	printf("%s", c);
	strftime(c, 40, "S = %S\n", p);
	printf("%s", c);
	strftime(c, 40, "U = %U\n", p);
	printf("%s", c);
	strftime(c, 40, "w = %w\n", p);
	printf("%s", c);
	strftime(c, 40, "W = %W\n", p);
	printf("%s", c);
	strftime(c, 40, "x = %x\n", p);
	printf("%s", c);
	strftime(c, 40, "X = %X\n", p);
	printf("%s", c);
	strftime(c, 40, "y = %y\n", p);
	printf("%s", c);
	strftime(c, 40, "Y = %Y\n", p);
	printf("%s", c);
	strftime(c, 40, "Z = %Z\n", p);
	printf("%s", c);
	
	free(b);

	
}


