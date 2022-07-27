#include <stdio.h>
#include <stdlib.h>
typedef struct NODE{
	struct NODE *link;
	int value;
}Node;

#define FALSE  0
#define TRUE   1

int sile_insert(Node **linkp, int new_value)
{
	Node *current;
	Node *new;
	while((current = *linkp) != NULL &&
		current->value < new_value)
		linkp = &current->link;
	
	new = (Node *)malloc(sizeof(Node));
	if(new == NULL)
		return FALSE;
	new->value = new_value;

	new->link = current;
	*link  = new;
	return TRUE;
}
int main(void)
{
	Node a;
	Node *root = a;
	a.value = 2;
	sile_insert(&a, 5);
	

}







