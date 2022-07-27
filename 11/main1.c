#include <stdio.h>
#include <stdlib.h>

int compare_integers(void const *a, void const *b)
{
	register int const *pa = a;
	register int const *pb = b;
	return *pa > *pb ? 1: *pa < *pb ?-1 : 0;
}

int main(void)
{
	int *array;
	int n_value;
	int i;

	printf("How many values are there?");
	if(scanf("%d", &n_value) != 1|| n_value <=0 )
	{
		printf("Illeage number of value \n");
		exit(EXIT_FAILURE);
	}

	array = malloc(n_value * sizeof(int));
	if(array == NULL){
		printf("Can't get memory for that many value.\n");
		exit(EXIT_FAILURE);
	}

	for(i = 0;i < n_value; i++)
	{
		printf("?  ");
		if(scanf("%d", array + i) != 1)
		{
			printf("Error reading vlue #%d\n", i);
			free(array);
			exit(EXIT_FAILURE);
		}
	}
	
	qsort(array, n_value, sizeof(int), compare_integers);

	for(i=0;i<n_value; i++)
	{
		printf("%d\n", array[i]);
	}
	free(array);
	return EXIT_SUCCESS;

}




