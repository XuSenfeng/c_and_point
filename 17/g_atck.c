#include <stdlib.h>
#include <stdio.h>
#include "g_atck.h"

GENERIC_STACK(int, _int, 10)
GENERIC_STACK(float, _float, 10)
int main(){
	push_int(5);
	push_int(22);
	push_int(15);
	push_float(25.4);
	push_float(-40.5);
	
	while(!is_empty_int()){
		printf("*Popping %d\n", top_int());
		pop_int();
	}	
	while(!is_empty_float()){
		printf("*Popping %f\n", top_float());
		pop_float();
	}
	return EXIT_SUCCESS;
}

