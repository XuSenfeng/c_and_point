#include <stdio.h>
#include <time.h>
int main()
{
	time_t time_n;
	struct tm *tp;
	time(&time_n);
	tp = gmtime(&time_n);
	printf("time: %s\n", ctime(&time_n));
	printf("hour:%d\n", tp->tm_hour);
	printf("min:%d\n", tp->tm_min);
	printf("mday:%d\n", tp->tm_mday);
}


