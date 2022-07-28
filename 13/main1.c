#include <stdio.h>
#define TRUE 1
void process_standard_input(void)
{
	printf("over");
}
void process_file(char *file_name){
	printf("open : %s\n", file_name);
}

int option_a, option_b;

void main(int argc, int **argv){
	while(*++argv != NULL && **argv == '-'){
		switch(*++*argv){
			case 'a':
				option_a = TRUE;
				printf("a");
				break;
			case 'b':
				option_b = TRUE;
				printf("b");
				break;
		}
	}
		if(*argv == NULL)
			process_standard_input();
		else{
			do{
				printf("laile");
				process_file(*argv);
			}while(*++argv != NULL);
		}

	

}



