#include <stdio.h>
#include "tree.h"
void callback(TREE_TYPE a)
{
	printf("%d ", a);
}
int main(void)
{
	insert(4);
	insert(2);
	insert(1);
	insert(3);
	insert(6);
	insert(5);
	insert(7);
	printf("%d\n", *find(3));
	pre_order_traverse(&callback);
	puts("");
	return 0;
}







