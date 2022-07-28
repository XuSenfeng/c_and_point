#include <stdio.h>
#define debug

int main(void){
#ifdef debug
	printf("A\n");
#else
	printf("B\n");
#endif
	return 0;

}


