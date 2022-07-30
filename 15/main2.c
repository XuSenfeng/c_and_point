#include <stdio.h>
#include <ctype.h>

int read_init(void){
	int value;
	int ch;
	value = 0;
	while((ch = getchar()) != EOF && isdigit(ch)){
		value *= 10;
		value += ch - '0';
	}
	ungetc(ch, stdin);
	return value;
}
int main(void)
{
	int value;
	value = read_init();
	printf("-------main--------\n");
	printf("value = %d", value);
	printf("%c\n", getchar());
	return 0;
}



