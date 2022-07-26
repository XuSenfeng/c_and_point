#include <stdio.h>
#define NUM 5
float values[NUM];
float *vp;

int main()
{
	for( vp = &values[0]; vp <&values[NUM];)
		*vp++ = 0;
	for( vp = &values[NUM]; vp >= &values[0];)
		*--vp = 0;
	for( vp = &values[NUM-1]; vp >= &values[0];vp--)
		*vp = 0;
	return 0;


}



