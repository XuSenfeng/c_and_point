#include <stdio.h>

int main(){
	int a[10];
	int b[10];
	int *p;
	p = a;
	printf("p = a = %p\n", p);
	p = &a;
	printf("p = &a = %p\n", p);
	return 0;

}
